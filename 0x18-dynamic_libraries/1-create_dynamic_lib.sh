#!/usr/bin/sh
gcc -c *.c
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so \
*.o

