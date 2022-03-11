#include "CComplexVector.h"
#include <iostream>
using namespace std;


CComplexVector::CComplexVector(int dim, const char *fileName){
        strcpy(filename,fileName);
        arr = new int*[dim];
        if(arr == NULL){
            exit(1);
        }
        for(int i = 0;i < dim; i++){
            arr[i] = new int[2]();
            if(arr[i] == NULL){
                exit(2);
            }
        }
        n = dim;
    }

CComplexVector::CComplexVector(const CComplexVector& other) {
    this->n = other.n;
    arr = new int* [this->n];
    if (arr == NULL) {
        exit(1);
    }
    for (int i = 0;i < this->n; i++) {
        arr[i] = new int[2]();
        if (arr[i] == NULL) {
            exit(2);
        }
    }

    for (int i = 0; i < this->n; i++) {
        this->arr[i][0] = other.arr[i][0];
        this->arr[i][1] = other.arr[i][1];
    }

}
CComplexVector::~CComplexVector(){

   for(int i=0; i<n; i++){
      delete[] arr[i];
   }

    delete[] arr;
}

const char* CComplexVector::Get_filename(){
    return filename;
}

int CComplexVector::Get_Re(int i) {
	return arr[i][0];
}
int CComplexVector::Get_Im(int i) {
	return arr[i][1];
}

void CComplexVector::Set_Re_Im(int value_Re, int value_Im, int i){

	arr[i][0] = value_Re;
	arr[i][1] = value_Im;

}

CComplexVector& CComplexVector::operator =(const CComplexVector &other){
    if (this->n != other.n)exit(1);
    for(int i=0; i<this->n; i++){
        this->arr[i][0] = other.arr[i][0];
        this->arr[i][1] = other.arr[i][1];
    }
    return *this;
}


std::pair<int,int> operator *(CComplexVector &A, CComplexVector &B){
    if (A.n != B.n)exit(3);
    std::pair<int,int> retPair;

    for(int i=0;i<A.n; i++){
        retPair.first += A.Get_Re(i)*B.Get_Re(i) - A.Get_Im(i)*B.Get_Im(i);
        retPair.second += A.Get_Re(i)*B.Get_Im(i) + A.Get_Im(i)*B.Get_Re(i);
    }
    return retPair;
}
