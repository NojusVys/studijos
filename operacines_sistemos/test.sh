#!bin/bash
if [ -z $1 ]; then
  echo Prasau ivesti katalogo varda
  read kat
else
  kat=$1
fi
if [ -d $kat ]; then
  echo Apgailestaujame, bet katalogas $kat jau yra
else
  mkdir $kat
  echo Katalogas vardu $kat sekmingai sukurtas
  cd $kat
  pwd
fi
