#!/bin/bash

read num1 
read num2

if [ $num1 -lt $num2 ]; then 		 
		echo "X is less than Y"
elif [ $num1 -eq $num2 ]; then 
		echo "X is equal to Y"
else
        echo "X is greater than Y"        
fi
