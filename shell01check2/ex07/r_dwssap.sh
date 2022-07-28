 cat /etc/passwd | awk -F: '{print $1}'| sed -n 2~2p | rev |sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" |sed -z 's/\n/, /g;s/, $/./'
