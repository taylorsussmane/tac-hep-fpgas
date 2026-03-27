#include <iostream>
#include <cstdlib>
#include "ap_fixed.h"
#define SIZE 100

typedef ap_fixed<12,6,AP_RND, AP_SAT> in_d_t;
typedef ap_fixed<13,7,AP_RND, AP_SAT> out_d_t;

void vector_add(in_d_t a[SIZE], in_d_t b[SIZE], out_d_t c[SIZE]);

int main(){

    in_d_t a[SIZE];
    in_d_t b[SIZE];
    out_d_t c[SIZE];

	for (int i = 0; i<SIZE; i++){
		in_d_t j=i;
		a[i] = j;
		b[i] = 2*j;
	}

	vector_add(a,b,c);

	int errors = 0;
	for (int i = 0; i<SIZE; i++){
		if (c[i] != a[i]+b[i])
			errors++;
	}
	
	return errors;
}

