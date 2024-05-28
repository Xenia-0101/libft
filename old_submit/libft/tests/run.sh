#!/bin/bash

rm -f app
clear

make re

# run the app with command line argument
./app $1
