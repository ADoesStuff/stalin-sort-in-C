#include <stdio.h>
#include "array.h"
#include "stalin.h"

int main(){
    int arr[] = {3, 5, 83, 75, -29, 48};
    int n = 6;
    print_arr(arr, n);

    n = sort(arr, n);
    print_arr(arr, n);
    return 0;
}