#!/bin/sh

echo "Running Makefile"
make

echo "\nC++"
./twosumcpp $1 $2 $3 $4 $5

echo "\nPython"
./twosum.py $1 $2 $3 $4 $5

echo "\nJavascript"
node twosum.js $1 $2 $3 $4 $5

echo "\nCompiling Java to bytecode"
javac twosum.java

echo "\nJava"
java twosum $1 $2 $3 $4 $5

echo "\nBuilding Go"
go build twosum.go

echo "\nGolang"
go run twosum.go $1 $2 $3 $4 $5
