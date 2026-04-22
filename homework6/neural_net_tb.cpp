#include <iostream>
#define I 6
#define J 8

void neural_net(int in[I][1], int out[J][1], int weight[J][I]);

int main() {

    int a[I][1];
    int b[J][1];
    int c[J][I];

    for (int i = 0; i < I; i++){
        a[i][0] = i;
		for (int j = 0; j < J; j++)
			c[j][i] = 2*j;
	}

    neural_net(a,b,c);

    int errors = 0;
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            int sum = 0;
            for (int k = 0; k < I; k++){
                sum += a[k][0]*c[j][k];
            }
            if (b[j][0] != sum)
                errors++;
        }
    }

    if (errors == 0)
        std::cout << "TEST PASSED\n";
    else
        std::cout << "TEST FAILED\n";

    return errors;
}
