#include <stdio.h>
#include "array.h"
#include "stalin.h"

int main(){
    init();

    Array array = randomArr();

    // pring array before it's sorted
    printArr(array);

    // sort the array
    array = sortArr(&array);
    
    // print the array after it's sorted
    printArr(array);

    return 0;
}