#pragma once
#include "CComplexVector.h"

class CComplexVector0 : public CComplexVector
{
public:
    CComplexVector0(int dim,const char *fileName):CComplexVector(dim, fileName){
    }
    CComplexVector0(CComplexVector& other) : CComplexVector(other){
    }
    using CComplexVector::operator=;

    int output(const char *FileName) override;
    friend CComplexVector0 operator +(CComplexVector &A, CComplexVector &B);
    friend CComplexVector0 operator -(CComplexVector &A, CComplexVector &B);
};


