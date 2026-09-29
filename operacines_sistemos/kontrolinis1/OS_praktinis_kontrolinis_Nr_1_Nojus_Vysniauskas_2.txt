#!/bin/bash

echo Iveskite pirmaji skaiciu.
read var1
echo Iveskite antraji skaiciu.
read var2
if [ $var1 -gt $var2 ]; then
  echo `expr $var1 \* $var2`
elif [ $var1 -lt $var2 ]; then
  echo `expr $var1 + $var2`
else
  echo Du ivesti skaiciai yra lygus
fi
