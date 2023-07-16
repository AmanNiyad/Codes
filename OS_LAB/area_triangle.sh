#!/bin/bash
#
read -p "Enter the length of side1 " s1
read -p "Enter the length of side2 " s2
read -p "Enter the length of side3 " s3

read -p "Enter the height " h
area=`echo \(1 / 2 \) \* $s2 \* $h | bc -l`
peri=`echo $s1 + $s2 + $s3 | bc -l`

echo "Area of the triangle is: " $area
echo "Perimeter of the triangle is: " $peri
