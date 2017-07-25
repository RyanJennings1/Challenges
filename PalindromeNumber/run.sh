#!/usr/bin/env bash

printf "C++: \n"
make
./palindromeNumber $1

printf "\nPython: \n"
python palindromeNumber.py $1

printf "\nJava: \n"
javac palindromeNumber.java
java palindromeNumber $1

