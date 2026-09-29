#Kaip suzinoti ko daugiau failu ar katalogu
kat=$(ls -l | grep drw | wc -l)
fail=$(ls -l | grep "\-rw" | wc -l)
if [ $kat -le $fail ]; then
  echo Failu yra daugiau $fail nei katalogu $kat
else
  echo Katalogu yra daugiau $kat nei failu $fail
fi
