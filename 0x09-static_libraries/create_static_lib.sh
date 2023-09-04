#!/bin/bash
#Script to create a static lib called liball.a from all .c files
gcc -c *.c
ar -rc liball.a *.o
