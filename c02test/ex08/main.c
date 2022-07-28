#include<stdio.h>

char *ft_strlowcase(char *str);

int main()
{
    char str1[] = "09Cd";
    char str2[] = "asAdb";
    printf("%s\n",str1); 
    printf("%s\n%s\n",ft_strlowcase(str1),ft_strlowcase(str2)); 
}