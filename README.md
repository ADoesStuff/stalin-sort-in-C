# Stalin Sort
Stalin sort is a famous sorting algorithm for being so... Stalin.
This is an implementation of Stalin sort in C.
It uses a main.c and two other files.

## array.c, array.h
These files contains utilities about arrays.
e.g. struct Array.
This is a struct that contains:
1. An integer pointer (int*) which is the array.
2. An integer (int) which is the length of the array.
Also methods for printing arrays, creating random arrays etc.

## stalin.c, stalin.h
These files includes just the sorting logic of stalin sort.
They're also compatible with Array from array.h