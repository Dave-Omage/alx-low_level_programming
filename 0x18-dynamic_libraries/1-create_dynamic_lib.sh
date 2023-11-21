#!/bin/bash
gcc -c -fpic *.c
gcc -shared -o liball.so *.o
export LD-LIBRARY_PATH=.:$LD_LIBRARY_PATH
