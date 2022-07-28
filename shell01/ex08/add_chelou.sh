#!/bin/sh
n1=$( echo $FT_NBR1|tr "'" "0"|tr '\\"?!' '1234')
n2=$( echo $FT_NBR2|tr "mrdoc" "01234" )
sum=$( echo "obase=13;ibase=5;$n1+$n2"|bc )
echo $sum | sed 'y/0123456789ABC/gtaio luSnemf/'
