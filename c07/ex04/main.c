#include<stdio.h>
#include<stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
    char *str;
    char *str0;
    char *str1;
    char *str2;
    char *str3;
    char *res;
    char base_from[]="123456";
    char base_to[]="abcdef";
    str="28";
    res=ft_convert_base(str,base_from,base_to);
    printf("%s\n",res);
    str0="2147483647";
    res=ft_convert_base(str0,base_from,base_to);
    printf("%s\n",res);
    str1="as";
    res=ft_convert_base(str1,base_from,base_to);
    printf("%s\n",res);
    str2="123";
    res=ft_convert_base(str2,base_from,base_to);
    printf("%s\n",res);
    str3="as";
    res=ft_convert_base(str3,base_from,base_to);
    printf("%s\n",res);
    free(res);

}