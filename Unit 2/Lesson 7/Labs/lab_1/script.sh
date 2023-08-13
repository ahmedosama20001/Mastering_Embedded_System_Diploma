#!/bin/bash
start=`date +%s`
echo -n "enter the first number : "
num1=1 
echo -n "enter the 2nd number : "
num2=1
sum=`expr $num1 + $num2`
echo "sum of two value is $sum"
end=`date +%s`
echo "execution time was `expr $end - $start` seconds."
