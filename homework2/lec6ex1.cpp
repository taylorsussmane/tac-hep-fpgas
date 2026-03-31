#include <vector>
#include <iostream>
#include <ap_int.h>
#include "hls_vector.h"
 
#define  totalNumWords 512
unsigned char data_t;
 
void compute (unsigned char in[totalNumWords ], unsigned char out[totalNumWords ]) {
  unsigned char tmp1[totalNumWords], tmp2[totalNumWords];
  A: for (int i = 0; i < totalNumWords ; ++i) {    
    tmp1[i] = in[i] * 3;
    tmp2[i] = in[i] * 3;
  }
  B: for (int i = 0; i < totalNumWords ; ++i) {    
    tmp1[i] = tmp1[i] + 25;
  }
  C: for (int i = 0; i < totalNumWords ; ++i) {  
    tmp2[i] = tmp2[i] * 2;
 }
  D: for (int i = 0; i <  totalNumWords ; ++i) {    
     out[i] = tmp1[i] + tmp2[i] * 2;
   }
}

int main(int, char**) {
	int arr[totalNumWords];
	unsigned char in[totalNumWords], out[totalNumWords];
    // initialize input vector arrays on CPU
    for (int i = 0; i < totalNumWords; i++) {
      arr[i] = i;
    }
    compute(&in[totalNumWords], &out[totalNumWords]);
    check_results();
}
 

