#!/bin/bash
gcc -Wall -padantic -Werror -Wextra -std=gnu89 -c *.c
ar -rx liball.a *.o
ranlib liball.a
