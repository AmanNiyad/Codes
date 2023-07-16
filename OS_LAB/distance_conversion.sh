#!/bin/bash
#
read -p "Enter distance in meters" meters
km_conv=`echo $meters / 1000 | bc -l`

echo "Converted distance is: " $km_conv

read -p "Enter distance in kilometers" km
m_conv=`echo $km \* 1000 | bc -l`

echo "Converted distance is: " $m_conv
