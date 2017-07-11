#!/bin/sh

echo C++_________________________
make
./reverseInteger $1
echo ""

echo Python______________________
./reverseInteger.py $1
echo ""

echo Java________________________
javac reverseInteger.java
java reverseInteger $1
