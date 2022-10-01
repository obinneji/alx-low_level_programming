#!/bin/bash
gcc -Wall -padantic -Werror -Wextra -c *.c
ar -rx liball.a *.o
