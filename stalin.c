#include <limits.h>
#include <stdio.h>
#include "array.h"

int sort_arr(int*, int);
Array sortArr(Array*);

/**
 * @brief Sorts an array with stalin sort.
 * @param array array to sort
 * @return Array sorted array
 */
Array sortArr(Array* array) {
    int* arr = array->arr;
    int n = array->n;
    n = sort_arr(arr, n);
    return array_from(arr, n);
}

/**
 * @brief Sorts an array with stalin sort.
 * Modifies the existing array
 * @param arr pointer to first element of the array
 * @param n length of the array
 * @return int new length of the sorted array
 */
int sort_arr(int* arr, int n) {
    int kill[n];
    int kill_n = 0;

    int max_val = INT_MIN;

    // build list of elements to kill
    for(int i=0; i<n-1; i++) {
        if(arr[i] > max_val) {
            max_val = arr[i];
        }
        if(max_val > arr[i+1]) {
            kill[kill_n] = i+1;
            kill_n++;
        }
    }

    // kill marked elements
    int new_arr[n-kill_n];
    int new_arr_n = 0;

    for(int i=0; i<n; i++) {
        if(!arr_contains(kill, kill_n, i)) {
            new_arr[new_arr_n] = arr[i];
            new_arr_n++;
        }
    }

    // copy new_arr to arr
    for(int i=0; i<new_arr_n; i++) {
        arr[i] = new_arr[i];
    }
    return new_arr_n;
}