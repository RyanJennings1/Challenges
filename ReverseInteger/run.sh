#!/bin/sh

echo "C++"
make
./reverseInteger $1

echo "\nPython"
./reverseInteger.py $1

echo "\nJava"
javac reverseInteger.java
java reverseInteger $1

echo "\nJavascript"
node reverseInteger.js $1
