#!/bin/bash
./tools/ccleaner.sh
make
gcc -o unit_tests \
tests/test_s_reverse.c \
-L. -lmy --coverage -lcriterion
clear
./unit_tests
