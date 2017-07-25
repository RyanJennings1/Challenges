#!/usr/bin/env bash

echo "C++"
make
./palindromeNumber $1

echo "\nJava"
javac palindromeNumber.java
java palindromeNumber $1

