#include "test.h"
#include <iostream>
#include <string.h>
using namespace std;


int test1(){

    char file_name[256];
    char fileCheck_info[256];
    ifstream fin;
    fin.open("test1.txt");
    int I=-1;
    int Re = -11;
    int Im = -11;
    char k;
    int dim = -1;
    int j =0;
    CComplexVector **vect;
    vect = new CComplexVector * [1];
    fin >> I;
    fin >> file_name;
        if(I == 1){
            vect[0] = new CComplexVector1(3, file_name);
        }
        if(I == 0){
            vect[0] = new CComplexVector0(3, file_name);
        }

        while(1){
            fin >> Re;
            fin >> Im;
            vect[0]->Set_Re_Im(Re,Im,j);

            if(fin.eof()){
                break;
            }
            k = fin.get();
            if(k == '\n' || k == '\0' ){
                j=0;
                break;
            }
            j++;
        }
    fin.close();
    vect[0]->output(vect[0]->Get_filename());

    fin.open("TestFile1.txt");
    fin.getline(fileCheck_info,256);
    fin.close();
    delete[] vect;
	if(strcmp(fileCheck_info,"(1 + 2i, 3 + 4i, 5 + 6i")){
        cout << "test1 passed" << endl;
        return 0;
	}
	else {
        cout << "test1 not passed" << endl;
        return 1;
	}
}

int test2(){

    char file_name[256];
    char fileCheck_info1[256];
    char fileCheck_info2[256];
    ifstream fin;
    fin.open("test2.txt");
    int I=-1;
    int Re = -11;
    int Im = -11;
    char k;
    int dim = -1;
    int j =0;
    CComplexVector **vect;
    vect = new CComplexVector * [1];
    fin >> I;
    fin >> file_name;

        if(I == 1){
            vect[0] = new CComplexVector1(2, file_name);
        }
        if(I == 0){
            vect[0] = new CComplexVector0(2, file_name);
        }

        while(1){
            fin >> Re;
            fin >> Im;
            vect[0]->Set_Re_Im(Re,Im,j);

            if(fin.eof()){
                break;
            }
            k = fin.get();
            if(k == '\n' || k == '\0' ){
                j=0;
                break;
            }
            j++;
        }
    fin.close();
    vect[0]->output(vect[0]->Get_filename());
    fin.open("TestFile2.txt");
    fin.getline(fileCheck_info1,256);
    fin.getline(fileCheck_info2,256);
    fin.close();
    delete[] vect;
	if(strcmp(fileCheck_info1,"5 + 6i")==0 && strcmp(fileCheck_info2,"7 + 8i")==0){
        cout << "test2 passed" << endl;
        return 0;
	}
	else {
        cout << "test2 not passed" << endl;
        return 1;
	}
}

int main_test(){
    if(test1() + test2() == 0){
        return 0;
    }
    else return 1;
}

