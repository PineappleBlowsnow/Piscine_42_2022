#include<stdio.h>

int	ft_strlen(char *str);
int main()
{
    int i; 
    char str[] = "98cd\0";
    i=ft_strlen(str); 
    printf("%d ", i);

}