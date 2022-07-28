 cat /etc/passwd | sed -n 2~2p | awk -F: '{print $1}'|rev |sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" |sed -z 's/\n/, /g;s/, $/./'
