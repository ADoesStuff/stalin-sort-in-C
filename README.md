# What is stalin sort?
Stalin sort is a sorting algorithm inspired by Joseph Stalin who was famous 
for executing a lot of people.
The Algorithm works by removing items that are out of order.
This is an implementation of Stalin sort in C.

This program generates a random array, sorts it and then prints the sorted array and its status.

## How to run.
You can use make.sh on linux or make.bat on windows to compile and run the program.
GCC compiler is required for the scripts to work.
You can use 'keep_output' parameter in scripts to keep the generated executable.

## src/utils/*
These files contains utilities about arrays.
e.g. struct Array.
This is a struct that contains:
1. An integer pointer (int*) which is the array.
2. An integer (int) which is the length of the array.
Also methods for printing arrays, creating random arrays etc.

## src/stalin/*
These files includes just the sorting logic for stalin sort.
They're also compatible with struct Array from array.h