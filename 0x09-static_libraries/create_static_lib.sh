#!/bin/bash
gcc -Wall -c *.c
ar rc liball.a
ar -t liball.a
