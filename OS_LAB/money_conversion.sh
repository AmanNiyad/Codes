#!/bin/bash

read -p "Enter money in paise " paise
conv=`echo $paise / 100 | bc -l`
echo "Converted in rupees " $conv

read -p "Enter money in rupees " rs
con2=`echo $rs \* 100 | bc -l`
echo "Converted in paise " $con2
