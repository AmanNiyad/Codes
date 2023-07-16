#!/bin/bash
#
read -p "Enter num1 " num1
read -p "Enter num2 " num2
read -p "Enter num3 " num3

if [ $num1 -gt $num2 ]
then 
  if [ $num1 -gt $num3 ]
  then 
    echo "Largest number is num1 and it's value is: " $num1
  else
    echo "Largest number is num3 and it's value is: " $num3
  fi
fi

if [ $num2 -gt $num1 ]
then 
  if [ $num2 -gt $num3 ]
  then 
    echo "Largest number is num2 and it's value is: " $num2
  else
    echo "Largest number is num3 and it's value is: " $num3
  fi
fi


