#!/bin/bash

rm -f app
clear

make all

# run the app with command line argument
./app $1
