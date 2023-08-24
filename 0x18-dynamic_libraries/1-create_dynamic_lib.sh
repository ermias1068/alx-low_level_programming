#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC *.c

# Create the dynamic library liball.so by linking the object files
gcc -shared -o liball.so *.o

# Clean up the generated object files
rm *.o

echo "Dynamic library liball.so created successfully."

