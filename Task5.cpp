#include <iostream>
#include "matrix.h"
using namespace std;

int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];

    add(a,b,c);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    cout << determinant(a) << endl;
}
