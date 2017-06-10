#!/bin/sh

echo "Running Makefile"
make

echo "\nC++"
./twosumcpp

echo "\nPython"
./twosum.py

echo "\nJavascript"
node twosum.js

echo "\nCompiling Java to bytecode"
javac twosum.java

echo "\nJava"
java twosum

echo "\nBuilding Go"
go build twosum.go

echo "\nGolang"
go run twosum.go
