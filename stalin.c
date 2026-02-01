#include <limits.h>
#include <stdio.h>
#include "array.h"

/**
 * Sorts given array and returns new n as int
 */
int sort(int* arr, int n) {
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