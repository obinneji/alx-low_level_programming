#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rx liball.a *.o
