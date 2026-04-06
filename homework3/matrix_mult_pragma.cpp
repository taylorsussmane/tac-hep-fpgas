#include <iostream>
#define N 10

void matrix_mult(int A[N][N], int B[N][N], int C[N][N]){

//	#pragma HLS interface mode=m_axi port=A depth=100
//	#pragma HLS interface mode=m_axi port=B depth=100
//	#pragma HLS interface mode=m_axi port=C depth=100
//	#pragma HLS interface mode=s_axilite port=return
	#pragma HLS array_partition variable=A complete dim=1
    #pragma HLS array_partition variable=B complete dim=1
    #pragma HLS array_partition variable=C complete dim=1

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			int sum = 0;
			for (int k = 0; k < N; k++){
//				#pragma HLS PIPELINE II=2
				sum += A[i][k]*B[k][j];
			}
			C[i][j] = sum;
		}
	}
}
