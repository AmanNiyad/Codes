#!/bin/bash

read -p "Enter number 1 " num1
read -p "Enter number 2 " num2

if [ $num1 -gt $num2 ]
then
  echo "The greater number of the two is num1 and it's value is: " $num1
else
  echo "The greater number of the two is num2 and it's value is: " $num2
fi

