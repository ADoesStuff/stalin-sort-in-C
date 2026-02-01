#pragma once

/**
 * @brief Struct representing an array.
 * Wraps a pointer to the first element of an array
 * and it's length in one thing.
 */
typedef struct Array {
    int* arr;
    int n;
} Array;

/**
 * @brief Constructs an Array.
 * @param arr arr to put in an Array
 * @param n length of the arr
 * @return Array Array struct with given values.
 */
Array array_from(int* arr, int n);

/**
 * @brief Prints an Array.
 * Prints given array's memory location and 
 * it's elements wrapped in braces
 * @param array Array to print
 */
void printArr(Array array);

/**
 * @brief Prints an array.
 * Prints given array's memory location and it's
 * elements wrapped in braces
 * @param arr pointer to first element of the array
 * @param n length of the array
 */
void print_arr(int* arr, int n);

/**
 * @brief Checks if an element appears in an array.
 * Checks if the given element appears in the given
 * array at least once.
 * @param array array to check if given element exists in.
 * @param el element to check if the array contains
 * @return int Returns 1 if the given array contains the given
 * elemtn at least once; false otherwise.
 */
int arrContains(Array array, int el);

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
int arr_contains(int* arr, int n, int el);