#pragma once
#include "CComplexVector.h"

class CComplexVector1 : public CComplexVector
{
public:
    CComplexVector1(int dim,const char *fileName):CComplexVector(dim, fileName){
    }
    int output(const char *FileName) override;
    friend CComplexVector1 operator +(CComplexVector1 &A, CComplexVector1 &B);
    friend CComplexVector1 operator -(CComplexVector1 &A, CComplexVector1 &B);

};
