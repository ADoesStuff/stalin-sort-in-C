#include <stdio.h>
#include "./utils/array.h"
#include "./stalin/stalin.h"

int main();
void greet();

int main(){
    greet();

    init();
    Array array = randomArr();

    // pring array before it's sorted
    printf("Unsorted : ");
    printArr(array);

    // sort the array
    array = sortArr(array);
    
    // print the array after it's sorted
    printf("Sorted   : ");
    printArr(array);

    int sorted = isSorted(array);
    printf("Array is %ssorted.\n", sorted?"":"not ");

    return 0;
}

void greet() {
    printf("**********************************************\n");
    printf("***************STALIN SORT IN C***************\n");
    printf("************MADE BY JASON AND ALEX************\n");
    printf("**********************************************\n\n");
}