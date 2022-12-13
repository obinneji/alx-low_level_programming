#!/bin/bash
gcc -Wall -Wextram -Werror -pedatic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
