#!/bin/bash

read X 

suma=0
ii=1
while [ $ii -le $X ]
do
    read nume
	suma=$((suma+nume))
    ii=$((ii+1))
done

printf "%.3f" $( echo " scale = 4; $suma/$X" | bc -l )
