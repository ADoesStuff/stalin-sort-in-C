#!/usr/bin/env bash

clear

# Stop after any error
set -e

# Check if gcc is installed
if ! command -v gcc >/dev/null 2>&1; then
    echo "GCC (C compiler) is not installed."
    exit 1
fi

cd src

# Compile C files
#gcc -fsanitize=address main.c array.c stalin.c -o main
gcc ./main.c ./utils/array.c ./stalin/stalin.c -o ../out/main

# Run compiled output
../out/main

# Remove executable
if [[ $1 != "keep_output" ]] ; then
    rm -f ../out/main
fi

cd ..