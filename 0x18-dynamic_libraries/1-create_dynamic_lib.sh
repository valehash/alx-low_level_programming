#!/usr/bin/sh
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o

