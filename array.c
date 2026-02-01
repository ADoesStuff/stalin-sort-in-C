#include <stdio.h>
#include "array.h"

void print_arr(int* arr, int n) {
    for (int i = 0; i<n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int arr_contains(int* arr, int n, int el) {
    for(int i=0; i<n; i++) {
        if(arr[i] == el) {
            return 1;
        }
    }
    return 0;
}