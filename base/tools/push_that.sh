#!/bin/bash

tools/ccleaner.sh
git add .
git commit -m "$1"
git push
