#!/bin/bash
gcc -c *.c '!(main.c)'
ar -rc liball.a *.o
