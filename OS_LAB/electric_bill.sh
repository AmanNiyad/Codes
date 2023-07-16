#!/bin/bash
#
read -p "Enter consumed unit " unit

if [ \( $unit -gt 0 \) -a \( $unit -le 100 \) ]
then

    echo "Bill is: Rs" `expr $unit \* 10`


elif [ \( $unit -gt 100 \) -a \( $unit -le 200 \) ]
then

  echo "Bill is: Rs" `expr \( \( $unit - 100 \) \* 20 \) + 1000`



elif [ \( $unit -gt 200 \) ]
then

  echo "Bill is: Rs" `expr \( \( $unit - 200 \) \* 30 \) + 3000 `

fi


