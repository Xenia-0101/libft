#!/bin/bash

rm -f app
clear

make all

# run the app with command line argument
valgrind --tool=memcheck --leak-check=yes ./app $1
