#include <iostream>
#define N 64

typedef int in_dt;
typedef int out_dt;

void element_arithmetic(in_dt A[N], in_dt B[N], out_dt E[N]){
	#pragma HLS array_partition variable=A complete
	#pragma HLS array_partition variable=B complete
	
	for (int i = 0; i < N; i++){
		#pragma HLS unroll factor=8
		E[i] = (A[i] + B[i])*(A[i] - B[i]);
	}
}
