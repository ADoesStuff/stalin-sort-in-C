#!/usr/bin/env bash

# Stop after any error
set -e

# Check if gcc is installed
if ! command -v gcc >/dev/null 2>&1; then
    echo "GCC (C compiler) is not installed."
    exit 1
fi

# Compile C files
gcc main.c array.c stalin.c -o main

# Run compiled output
./main

# Remove executable
rm -f main