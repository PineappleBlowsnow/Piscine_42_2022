#include<unistd.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    int i; 
    char src[]="This!"; 
    char dest[30];

    write(1,ft_strncpy(dest, src,8),8); 
    write(1,ft_strncpy(dest, src,0),8); 
    i=5; 
    while(i<8)
    {
        if(dest[i]=='\0')
        {
            printf("%c\n",'Y');
        }
        i++; 
    }
}