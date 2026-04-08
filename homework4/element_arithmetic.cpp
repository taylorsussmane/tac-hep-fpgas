#include <iostream>
#define N 64

typedef int in_dt;
typedef int out_dt;

void element_arithmetic(in_dt A[N], in_dt B[N], out_dt C[N], out_dt D[N], out_dt E[N]){

	for (int i = 0; i < N; i++){
		C[i] = A[i] + B[i];
		D[i] = A[i] * B[i];
		E[i] = (A[i] + B[i])*(A[i] - B[i]);
	}
}
