#include <stdio.h>
#include "array.h"
#include "stalin.h"

int main(){
    // create an unsorted 
    int arr[] = {3, 5, 83, 75, -29, 48};
    int n = sizeof(arr)/sizeof(int);
    // create an Array from arr
    Array array = array_from(arr, n);

    // pring array before it's sorted
    printArr(array);

    // sort the array
    array = sortArr(&array);
    
    // print the array after it's sorted
    printArr(array);
    
    return 0;
}