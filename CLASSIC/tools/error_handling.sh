#!/bin/bash

make re
valgrind $1 ./projet
