#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    
    char str1[]="Hello"; 
    char str2[]="hello";
    printf("Myfunction:%d\n", ft_strcmp(str1,str2));
    printf("Standard function:%d\n",strcmp(str1,str2));
    char str3[]="hello"; 
    char str4[]="Hello";
    printf("Myfunction:%d\n", ft_strcmp(str3,str4));
    printf("Standard function:%d\n",strcmp(str3,str4));
    char str5[]="Hello"; 
    char str6[]="Hello!";
    printf("Myfunction:%d\n", ft_strcmp(str5,str6));
    printf("Standard function:%d\n",strcmp(str5,str6));
    char str7[]="Helloa"; 
    char str8[]="Hello";
    printf("Myfunction:%d\n", ft_strcmp(str7,str8));
    printf("Standard function:%d\n",strcmp(str7,str8));
    char str9[]="Hello1"; 
    char str10[]="Hello1";
    printf("Myfunction:%d\n", ft_strcmp(str9,str10));
    printf("Standard function:%d\n",strcmp(str9,str10));
}