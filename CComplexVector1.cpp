#include "CComplexVector1.h"
#include <fstream>



int CComplexVector1::output(const char *Filename) {

    ofstream fout;
    fout.open(Filename);
    for(int i=0;i<n;i++){
        fout << arr[i][0] << " + " << arr[i][1] << "i";
        if(i != n-1){
            fout << "\n";
        }
    }
    //fout << "\n";
    fout.close();
    return 3;

}

