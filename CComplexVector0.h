#pragma once
#include "CComplexVector.h"

class CComplexVector0 : public CComplexVector
{
public:
    CComplexVector0(int dim,const char *fileName):CComplexVector(dim, fileName){
    }
    int output(const char *FileName) override;
    friend CComplexVector0 operator +(CComplexVector0 &A, CComplexVector0 &B);
    friend CComplexVector0 operator -(CComplexVector0 &A, CComplexVector0 &B);
};


