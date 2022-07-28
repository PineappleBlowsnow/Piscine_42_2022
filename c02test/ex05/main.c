#include<stdio.h>

int ft_str_is_uppercase(char *str); 
int main()
{
    char *str1;
    char *str2;
    str1 = "A0";
    str2="ADC"; 
    printf("%d\n%d\n",ft_str_is_uppercase(str1),ft_str_is_uppercase(str2)); 
}