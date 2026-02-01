#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include "array.h"
#include <stdint.h>

Array array_from(int*, int);

void printArr(Array);
void print_arr(int*, int);

int arrContains(Array, int);
int arr_contains(int*, int, int);

Array randomArr();
void random_arr(int*, int);

void init();
void check();

const int MAX_ARRAY_SIZE = 10;
const int MIN_VAL = -20;
const int MAX_VAL = +20;

int initialized = 0;

/**
 * @brief Initializes the utility
 */
void init() {
    initialized = 1;
    srand(time(NULL));
}

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
    printf("Array %p [", (void*)arr);
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1){
            printf(", ");
        }
    }
    printf("]\n");
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

/**
 * @brief Returns an Array with random values and random length.
 * Generates an array with random length from 0 to MAX_ARRAY_SIZE.
 * And random values from MIN_VAL to MAX_VAL.
 * @return Array random array as Array
 */
Array randomArr() {
    check();
    int n = rand()%(MAX_ARRAY_SIZE+1);
    int *arr = malloc(n * sizeof *arr);
    random_arr(arr, n);
    return array_from(arr, n);
}

/**
 * @brief Randomizes given array.
 * Fills given array with random values from MIN_VAL to MAX_VAL.
 * @param arr array to fill with random values
 * @param n size of the array to fill
 */
void random_arr(int* arr, int n) {
    check();
    for(int i=0; i<n; i++) {
        arr[i] = MIN_VAL + rand() % (MAX_VAL - MIN_VAL + 1);
    }
}

void check() {
    if(!initialized){
        printf("Error: array utility is not initizlied yet.\n");
        exit(1);
    }
}