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

void inserisci_in_array(int A[], int start_index, int end_index) {

    int value = A[start_index];
    int index = start_index;

    while (index != end_index) {
        A[index] = A[index - 1];
        index--;
    }
    
    A[end_index] = value;
}