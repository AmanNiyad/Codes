#!/bin/bash

read -p "Enter number" num

if [ `expr \( $num % 2 \)` == 0 ]
then
  echo "The number is even"
else
  echo "The number is odd"
fi

