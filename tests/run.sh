#!/bin/bash

rm -f tests_app
clear

make all

# run the app with command line argument
./tests_app $1
