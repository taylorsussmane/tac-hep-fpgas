#include <iostream>
#include "ap_fixed.h"
#define SIZE 100

typedef ap_fixed<12,6,AP_RND,AP_SAT> in_d_t;
typedef ap_fixed<13,7,AP_RND,AP_SAT> out_d_t;

void vector_add(in_d_t a[SIZE], in_d_t b[SIZE], out_d_t c[SIZE]){

	for (int i = 0; i<SIZE; i++){
		#pragma HLS PIPELINE II=1
		c[i] = a[i]+b[i];
	}
}
