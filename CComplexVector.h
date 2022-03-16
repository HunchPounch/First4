#pragma once
using namespace std;
#include <iostream>
#include <string.h>
#include <fstream>

class CComplexVector {

protected:
    int** arr = NULL;
    int n;
    char filename[256];

public:

    CComplexVector(){
    }
    CComplexVector(int dim,const char *fileName);
    CComplexVector(const CComplexVector& other);
    ~CComplexVector();
    int Get_dim();
    int Get_Re(int i);
    int Get_Im(int i);
    char* Get_filename();
    void Set_Re_Im(int value_Re, int value_Im, int i);

    CComplexVector& operator =(const CComplexVector &other);
    friend std::pair<int,int> operator *(CComplexVector &A, CComplexVector &B);

    virtual int output(const char *FileName) = 0;

};




