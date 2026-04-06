#include <iostream>
#define N 10

void matrix_add(int A[N][N], int B[N][N], int C[N][N]) {

	#pragma HLS interface mode=m_axi port=A depth=100
    #pragma HLS interface mode=m_axi port=B depth=100
    #pragma HLS interface mode=m_axi port=C depth=100
    #pragma HLS interface mode=s_axilite port=return
//	#pragma HLS array_partition variable=A complete dim=0
//	#pragma HLS array_partition variable=B complete dim=0
//	#pragma HLS array_partition variable=C complete dim=0

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
			#pragma HLS PIPELINE II=2
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
