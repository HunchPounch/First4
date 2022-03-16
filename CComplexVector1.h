#pragma once
#include "CComplexVector.h"

class CComplexVector1 : public CComplexVector
{
public:
    CComplexVector1(int dim,const char *fileName):CComplexVector(dim, fileName){
    }
    int output(const char *FileName) override;
    CComplexVector1(const CComplexVector& other) : CComplexVector(other){
    }
    using CComplexVector::operator=;

    //friend CComplexVector0 operator +(CComplexVector1 &A, CComplexVector1 &B);
    //friend CComplexVector0 operator -(CComplexVector1 &A, CComplexVector1 &B);

};
