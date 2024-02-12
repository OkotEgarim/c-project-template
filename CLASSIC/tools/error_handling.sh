#!/bin/bash

make
valgrind $1 ./projet
