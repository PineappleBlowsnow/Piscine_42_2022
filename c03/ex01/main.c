#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n); 

int main()
{
    {
            char str1[]="Helloo"; 
    char str2[]="hello";
    printf("Myfunction:%d\n", ft_strncmp(str1,str2,0));
    printf("Standard function:%d\n",strncmp(str1,str2,0));
    }
    char str1[]="Hello"; 
    char str2[]="hello";
    printf("Myfunction:%d\n", ft_strncmp(str1,str2,3));
    printf("Standard function:%d\n",strncmp(str1,str2,3));
    char str3[]="hello"; 
    char str4[]="Hello";
    printf("Myfunction:%d\n", ft_strncmp(str3,str4,6));
    printf("Standard function:%d\n",strncmp(str3,str4,6));
    char str5[]="Hello"; 
    char str6[]="Hello!";
    printf("Myfunction:%d\n", ft_strncmp(str5,str6,6));
    printf("Standard function:%d\n",strncmp(str5,str6,6));
    char str7[]="Hello123"; 
    char str8[]="Helloaded";
    printf("Myfunction:%d\n", ft_strncmp(str7,str8,5));
    printf("Standard function:%d\n",strncmp(str7,str8,6));
    char str9[]="Hello1"; 
    char str10[]="Hello1";
    printf("Myfunction:%d\n", ft_strncmp(str9,str10,2));
    printf("Standard function:%d\n",strncmp(str9,str10,2));
    char str11[]="Hello1"; 
    char str12[]="Hello1";
    printf("Myfunction:%d\n", ft_strncmp(str9,str11,7));
    printf("Standard function:%d\n",strncmp(str9,str12,7));
}