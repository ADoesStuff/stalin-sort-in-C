# TODO Some windows user has to update and test this file.
# TODO It should have the same abilities with make.sh

# clear previous outputs
cls

cd src

# compile C code
gcc .\main.c .\stalin\stalin.c .\utils\array.c -o ..\out\main.exe

# run generated executable
..\out\main.exe

# remove 
del ..\out\main.exe

cd ..