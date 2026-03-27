#include <iostream>
#define N 100

void vector_add(int a[N], int b[N], int c[N]) {

    for (int i = 0; i < N; i++) {
           c[i] = a[i] + b[i];
    }
}
