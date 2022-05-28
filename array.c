#include <stdio.h>
#include "array.h"

void scambia(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void copia_array(int A[], int B[], int dim) {
    /*
        PRE dim è il numero di elementi di A e B.
        POST B è una copia di A
     */
    for(int i=0; i<dim; i+=1)
        B[i] = A[i];
}

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

void resetF(int A[], int dim) {
    /*
     * PRE: A ha dimensione almeno dim
     * POST per ogni i tale che 0<=i<dim si ha A[i]=0
     */
    for(int i=0; i<dim; i+=1)
        A[i] = 0;
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

void stampaArray(int A[], int dim) {
    for (int i = 0; i < dim; i++)
        printf("%d ", A[i]);
    printf("\n");
}