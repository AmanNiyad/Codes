#!/bin/bash

read -p "Enter first number" x
read -p "Enter second number" y
echo "Value of x is " $x
echo "Value of y is " $y

sum=`expr  $x + $y`

echo "Sum= "$sum

