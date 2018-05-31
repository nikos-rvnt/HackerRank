#!/bin/bash

read num1 
read num2 
read num3

if (($num1 != $num2)) && (($num2 != $num3)) && (($num3 != $num1)); then
    echo "SCALENE"
elif (($num1 == $num2)) && (($num2 == $num3)) && (($num3 == $num1)); then
    echo "EQUILATERAL"  
else
    echo "ISOSCELES"
fi
