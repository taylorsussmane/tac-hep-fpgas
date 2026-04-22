#include <iostream>
#define N 64

typedef int in_dt;
typedef int out_dt;

void element_arithmetic(in_dt A[N], in_dt B[N], out_dt E[N]);

int main(){

	in_dt A[N];
	in_dt B[N];
	out_dt E[N];

	for (int i = 0; i < N; i++){
		A[i] = i;
		B[i] = 2*i;
	}

	element_arithmetic(A, B, E);

	int errors = 0;
	for(int i = 0; i < N; i++){
		if (E[i] != (A[i] + B[i])*(A[i] - B[i]))
			errors++;
	}

	return errors;
}
