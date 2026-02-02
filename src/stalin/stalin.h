#pragma once

// #ifndef ARRAY_H
// #define ARRAY_H

#include "../utils/array.h"

/**
 * @brief Sorts an array with stalin sort.
 * @param array array to sort
 * @return Array sorted array
 */
Array sortArr(Array);

/**
 * @brief Sorts an array with stalin sort.
 * Modifies the existing array
 * @param arr pointer to first element of the array
 * @param n length of the array
 * @return int new length of the sorted array
 */
int sort_arr(int*, int);

// #endif