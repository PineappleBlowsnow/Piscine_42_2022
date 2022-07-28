#include<stdio.h>

char *ft_strupcase(char *str);

int main()
{
    char str1[] = "09cd";
    char str2[] = "asAdb";
    printf("%s\n",str1); 
    printf("%s\n%s\n",ft_strupcase(str1),ft_strupcase(str2)); 
}