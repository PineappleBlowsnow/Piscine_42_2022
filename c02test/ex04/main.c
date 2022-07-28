#include<stdio.h>

int ft_str_is_lowercase(char *str); 
int main()
{
    char *str1;
    char *str2;
    str1 = "0";
    str2="abgbf"; 
    printf("%d\n%d\n",ft_str_is_lowercase(str1),ft_str_is_lowercase(str2)); 
}