#ifndef ARRAY_H
#define ARRAY_H

/*
    Funzioni di utilità per array.
 */

void scambia(int *a, int *b);
    /*
    * PRE: a e b puntatori a interi
    * POST: scambia i valori degli oggetti puntati
    */

void copia_array(int A[], int B[], int dim);
    /*
        PRE: dim è il numero di elementi di A e B.
        POST: B è una copia di A
     */

int max_value(int A[], int dim);
    /*
     * PRE: A ha dimensione dim
     * POST: restituisce il massimo valore in A.
     */

void count_frequencies (int A[], int dim, int F[], int dimF);
    /*
     * PRE: A ha dimensione dim, F ha dimensione dimF
     * POST: F[k] ha come valore il numero di ricorrenze
     * di k in A per ogni k < dimF.
     */

void resetF (int F[], int dimF);
    /*
     * PRE: F ha dimensione dimF
     * POST: ogni elemento di F è inizializzato a 0.
     */

void inserisci_in_array(int A[], int start_index, int end_index);

void stampaArray(int A[], int dim);
    /*
    * PRE: A ha dimensione almeno dim
    * POST stampa a video gli elementi di A su 
    * una riga separati da spazi e poi va a capo. 
    */

#endif