#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
