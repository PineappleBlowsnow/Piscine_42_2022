#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    
    char str1[]="Hello"; 
    char str2[]="hello890";
    printf("Myfunction:%s\n", ft_strcat(str1,str2));
    printf("Standard function:%s\n",strcat(str1,str2));
    char str3[]="hello"; 
    char str4[]=" 0";
    printf("Myfunction:%s\n", ft_strcat(str3,str4));
    printf("Standard function:%s\n",strcat(str3,str4));
    char str5[]="Hello"; 
    char str6[]="!";
    printf("Myfunction:%s\n", ft_strcat(str5,str6));
    printf("Standard function:%s\n",strcat(str5,str6));
}