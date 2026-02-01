#include <stdio.h>
#include "array.h"

Array array_from(int*, int);

void printArr(Array);
void print_arr(int*, int);

int arrContains(Array, int);
int arr_contains(int*, int, int);

/**
 * @brief Constructs an Array.
 * @param arr arr to put in an Array
 * @param n length of the arr
 * @return Array Array struct with given values.
 */
Array array_from(int* arr, int n) {
    Array array = {arr, n};
    return array;
}

/**
 * @brief Prints an Array.
 * Prints given array's memory location and 
 * it's elements wrapped in braces
 * @param array Array to print
 */
void printArr(Array array) {
    print_arr(array.arr, array.n);
}

/**
 * @brief Prints an array.
 * Prints given array's memory location and it's
 * elements wrapped in braces
 * @param arr pointer to first element of the array
 * @param n length of the array
 */
void print_arr(int* arr, int n) {
    printf("Array %p [", &arr);
    for (int i = 0; i<n-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[n-2]);
}

/**
 * @brief Checks if an element appears in an array.
 * Checks if the given element appears in the given
 * array at least once.
 * @param array array to check if given element exists in.
 * @param el element to check if the array contains
 * @return int Returns 1 if the given array contains the given
 * elemtn at least once; false otherwise.
 */
int arrContains(Array array, int el) {
    return arr_contains(array.arr, array.n, el);
}

/**
 * @brief Checks if an element appears in an array.
 * Checks if the given element appears in the given
 * array at least once.
 * @param arr pointer to the first element of the array to search in.
 * @param n length of the array.
 * @param el element to check if it exists in the array
 * @return int Returns 1 if the given array contains the given
 * elemtn at least once; false otherwise.
 */
int arr_contains(int* arr, int n, int el) {
    for(int i=0; i<n; i++) {
        if(arr[i] == el) {
            return 1;
        }
    }
    return 0;
}