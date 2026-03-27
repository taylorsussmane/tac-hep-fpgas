#include<iostream>
#define N 10

void matrix_mult(int A[N][N], int B[N][N], int C[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int sum = 0;
            for (int k = 0; k < N; k++){
                sum += A[i][k]*B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

