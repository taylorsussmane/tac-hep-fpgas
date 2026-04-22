#include <iostream>
#define I 6
#define J 8

void neural_net(int in[I][1], int out[J][1], int weight[J][I]){

	for (int i = 0; i < I; i++){
		for (int j = 0; j < J; j++){
			int sum = 0;
			for (int k = 0; k < I; k++){
				sum += in[k][0]*weight[j][k];
			}
			out[j][0] = sum;
		}
	}
}

