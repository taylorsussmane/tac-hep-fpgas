#include <iostream>
#define N 10

void matrix_mult(int A[N][N], int B[N][N], int C[N][N]);

int main() {

    int A[N][N];
    int B[N][N];
    int C[N][N];

    // Initialize matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
        }
    }

    // Call DUT
    matrix_mult(A, B, C);

    // Verify
    int errors = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
			int sum = 0;
			for (int k = 0; k < N; k++){
				sum += A[i][k]*B[k][j];	
        	}
			if (C[i][j] != sum)
				errors++;
    	}
	}

    if (errors == 0)
        std::cout << "TEST PASSED\n";
    else
        std::cout << "TEST FAILED\n";

    return errors;
}

