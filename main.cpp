#include <iostream>
#include "CComplexVector.h"
#include "CComplexVector1.h"
#include "CComplexVector0.h"
#include "test.h"
using namespace std;

int main()
{
    if(main_test() == 1){
        cout << "tests not passed" << endl << endl;
        return 1;
    }
    else cout << "tests passed" << endl << endl;

    char file_name[256];
    char buffer[256];
    cout << "Please enter file name" << endl;
    cin >> file_name;
    ifstream fin;
    fin.open(file_name);
    int I=-1;
    int Re = -11;
    int Im = -11;
    char k;
    int stop=0;
    int i =0;
    int j =0;
    CComplexVector **arr1;

    while(!fin.eof()){
        fin.getline(buffer,255);
        stop++;
    }

    fin.close();
    fin.open(file_name);

    int *arr = new int[stop];
    while(i<stop){
        fin >> I;
        fin >> buffer;
        arr[i] = 0;
        while(1){
            arr[i]++;
            fin >> Re;
            fin >> Im;
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
    i++;
    }

    i = 0;
    j = 0;
    arr1 = new CComplexVector * [stop];
    fin.close();
    fin.open(file_name);

    while(i<stop){
        fin >> I;
        fin >> file_name;
        if(I == 1){
            arr1[i] = new CComplexVector1(arr[i], file_name);
        }
        if(I == 0){
            arr1[i] = new CComplexVector0(arr[i], file_name);
        }

        while(1){
            fin >> Re;
            fin >> Im;
            arr1[i]->Set_Re_Im(Re,Im,j);

            if(fin.eof()){
                break;
            }
            k = fin.get();
            if(k == '\n' ){
                j=0;
                break;
            }
            j++;
        }
    i++;
    }

    for(int m=0; m<stop; m++){
        arr1[m]->output(arr1[m]->Get_filename());

    }

    fin.close();

    delete [] arr1;
    return 0;
}















/*function4(){

    int *arr = new int[stop];
    while(i<stop){
        fin >> I;
        fin >> file_name;
        arr[i] = 0;
        while(1){
            arr[i]++;
            fin >> Re;
            fin >> Im;
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
    i++;
    }


}*/










