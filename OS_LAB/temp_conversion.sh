#!/bin/bash

read -p  "Enter temperature in centigrades" cent
const=`echo \(\( 9 / 5 \) \* $cent\) + 32 | bc -l`

echo "Temperature in farenheit is:  " $const

read -p  "Enter temperature in farenheit" far
const2=`echo \( 5 / 9 \) \* \( $far - 32 \) | bc -l`

echo "Temperature in celsius is:  " $const2
