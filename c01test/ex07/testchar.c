#include<unistd.h>
#include<string.h>
#include<stdio.h>

int main()
{
	char st[] = "abcve567ntmm.'l/\0";
	char *str; 
	
	str=st;
	st[2]='d';
	str[2]=' '; 
	while(*str)
        {
        write(1,str,1);
        str++;
        }
	printf("%ld\n",strlen(st));  
	
 
return (0); 
}


