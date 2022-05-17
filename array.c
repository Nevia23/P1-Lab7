#include <stdio.h>
#include "array.h"

int max_value(int A[], int dim) {

    int max = A[0], i;
    
    if (dim == 1) {
        return max;
    }

    for (i = 1; i < dim; i += 1) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    return max;
}

void count_frequencies (int A[], int dim, int F[], int dimF) {

    reset_F (F, dimF);

    int i;

    for (i = 0; i < dim; i += 1) {
        F[A[i]] += 1;
    }
}
