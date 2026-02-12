#ifndef MATRIX_H
#define MATRIX_H

void add(int a[2][2], int b[2][2], int c[2][2]){
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            c[i][j]=a[i][j]+b[i][j];
}

void sub(int a[2][2], int b[2][2], int c[2][2]){
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            c[i][j]=a[i][j]-b[i][j];
}

void mul(int a[2][2], int b[2][2], int c[2][2]){
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            c[i][j]=0;
            for(int k=0;k<2;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
}

int determinant(int a[2][2]){
    return a[0][0]*a[1][1]-a[0][1]*a[1][0];
}

#endif
