#include<stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
    char str1[] = "9Salut; a";
    char str2[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n%s\n",ft_strcapitalize(str1),ft_strcapitalize(str2)); 
}