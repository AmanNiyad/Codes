#!/bin/bash
#
read -p "Enter principle" principle
read -p "Enter interest rate" interest
read -p "Enter time" time

si=`echo \( $principle \* $time \* $interest \) / 100 | bc -l`

echo " Simple interest for the given values is: " $si
