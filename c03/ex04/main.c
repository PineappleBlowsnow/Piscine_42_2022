#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);
int main()
{
    char str1[100]="elheheo";
    char str2[]="he";
    printf("Myfunction:%s\n", ft_strstr(str1,str2));
    {
        char str1[100]="elheheo";
        char str2[]="he";
        printf("Standard function:%s\n",strstr(str1,str2));
    }
    char str3[100]="abcd";
    char str4[]="123";
    printf("Myfunction:%p\n", ft_strstr(str3,str4));
    {
        char str3[100]="abcd";
        char str4[]="123";
        printf("Standard function:%p\n",strstr(str3,str4));
    }


}