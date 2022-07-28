#include<stdio.h>

void    ft_putstr_non_printable(char *str);

int main()
{
    char tab[257];
    char str1[] = "Coucou\ntu vas bien ?";
    char str2[] = "\as\balut, \tcomment tu vas ?";
    ft_putstr_non_printable(str1);
    ft_putstr_non_printable(str2);
    for(int i=1;i<257;i++)
    {
        tab[i-1]=i; 
    }
    ft_putstr_non_printable(tab); 
}