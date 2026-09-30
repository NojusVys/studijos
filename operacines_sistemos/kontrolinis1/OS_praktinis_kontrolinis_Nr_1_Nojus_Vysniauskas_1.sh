#!/bin/bash

var1="$1"
var2="$2"

if [ -z "$var1" ]; then
  echo Iveskite pirmaji parametra
  read var1
fi
if [ -z "$var2" ]; then
  echo Iveskite antraji parametra
  read var2
fi

if [ -d "$var1" ] && [ ! -f "$var2" ] && [ ! -d "$var2" ]; then
  touch "$var2"
  cp "$var2" "$var1/"
  echo Failas "$var2" sukurtas ir nukopijuotas i kataloga "$var1"
elif [ -d "$var2" ] && [ ! -f "$var1" ] && [ ! -d "$var1" ]; then
  touch "$var1"
  cp "$var1" "$var2/"
  echo Failas "$var1" sukurtas ir nukopijuotas i kataloga "$var2"
else
  echo Klaida! Jusu ivesti parametrai netinkami
fi
