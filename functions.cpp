#include "CComplexVector.h"
#include "CComplexVector1.h"
#include "CComplexVector0.h"

CComplexVector0 operator +(CComplexVector0 &A, CComplexVector0 &B){
    if (A.n != B.n)exit(2);
    CComplexVector0 C(A.n,"buffer");

    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)+B.Get_Re(i), A.Get_Im(i)+B.Get_Im(i),i);
    }

    return C;
}

CComplexVector0 operator -(CComplexVector0 &A, CComplexVector0 &B){
    if (A.n != B.n)exit(1);
    CComplexVector0 C(A.n, "buf");
    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)- B.Get_Re(i), A.Get_Im(i) - B.Get_Im(i),i);
    }
    return C;
}

CComplexVector1 operator +(CComplexVector1 &A, CComplexVector1 &B){
    if (A.n != B.n)exit(2);
    CComplexVector1 C(A.n,"buffer");

    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)+B.Get_Re(i), A.Get_Im(i)+B.Get_Im(i),i);
    }

    return C;
}

CComplexVector1 operator -(CComplexVector1 &A, CComplexVector1 &B){
    if (A.n != B.n)exit(1);
    CComplexVector1 C(A.n, "buf");
    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)- B.Get_Re(i), A.Get_Im(i) - B.Get_Im(i),i);
    }
    return C;
}
