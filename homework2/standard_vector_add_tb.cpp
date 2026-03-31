#include <iostream>
#define N 100

void vector_add(int a[N], int b[N], int c[N]);

int main() {

    int a[N];
    int b[N];
    int c[N];

    for (int i = 0; i < N; i++) {
            a[i]  = i;
            b[i]  = 2*i;
    }

    vector_add(a, b, c);

    int errors = 0;
    for (int i = 0; i < N; i++) {
        if (c[i]  != a[i]  + b[i] ) {
             errors++;
        }
    }

    return errors;
}

