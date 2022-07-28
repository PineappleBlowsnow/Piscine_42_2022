#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
    
    char str1[100]="Hello"; 
    char str2[]="12345";
    printf("Myfunction:%s\n", ft_strncat(str1,str2,3));
    {
       char str1[100]="Hello"; 
        char str2[]="12345"; 
        printf("Standard function:%s\n",strncat(str1,str2,3));
    }
    
    char str3[]="hello"; 
    char str4[]=" 0";
    printf("Myfunction:%s\n", ft_strncat(str3,str4,5));
    printf("Standard function:%s\n",strncat(str3,str4,5));
    char str5[]="Hello"; 
    char str6[]="!";
    printf("Myfunction:%s\n", ft_strncat(str5,str6,5));
    printf("Standard function:%s\n",strncat(str5,str6,5));
}