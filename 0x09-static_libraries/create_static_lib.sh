#!/bin/bash
gcc -Wall -Wextra -pedantic -c *.c
ar -rcs liball.a *.o
