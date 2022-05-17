#include <stdio.h>
#include "counting_sort.h"

void counting_sort(int A[], int dim) {

    int i, j, dimF = max_value(A, dim) + 1;

    if (dimF == 1) {
        return;
    }

    int F[dimF];

    count_frequencies(A, dim, F, dimF);

    for (i = 0; i < dimF; i += 1) {

        while (F[i] > 0) {
            A[j] = i;
            F[i]--;
            j++;
        }
    }
}