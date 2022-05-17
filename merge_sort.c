#include <stdio.h>
#include "array.h"
#include "merge_sort.h"

void merge(int arr[], int l, int m, int r) {

    int l1 = m + 1;

    if (arr[m] <= arr[l1]) {
        return;
    }

    while (l <= m && l1 <= r) {

        if (arr[l] <= arr[l1]) {
            l++;
        } else {
            inserisci_in_array(arr, l1, l);
        }

        l++; m++; l1++;
    }

}

void mergeSort(int arr[], int l, int r) {

    int m = l + (r - l)/2;

    if (l < r) {

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}