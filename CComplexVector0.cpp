#include "CComplexVector0.h"
#include <fstream>



int CComplexVector0::output(const char *Filename) {

    ofstream fout;
    fout.open(Filename);
    fout << "(";
    for(int i=0;i<n;i++){

        fout << arr[i][0] << " + " << arr[i][1] << "i";
        if(i != n-1){
            fout << ", ";
        }
    }
    fout << ")" << "\n";
    fout.close();
    return 2;

}
