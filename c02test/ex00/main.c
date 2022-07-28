#include<stdio.h>

char *ft_strcpy(char *dest, char *src); 

int main()
{
    char src[]="7tgbheteghrge3";  
    char dest[30]; 
    char *str; 
    str=ft_strcpy(dest,src); 
    printf("%s\n", str); 
}