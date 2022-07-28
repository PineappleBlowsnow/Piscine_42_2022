#include<stdio.h>

int ft_str_is_numeric(char *str); 
int main()
{
    char *str1;
    char *str2;
    str1 = "0aaaa";
    str2="a"; 
    printf("%d\n%d\n",ft_str_is_numeric(str1),ft_str_is_numeric(str2)); 
}