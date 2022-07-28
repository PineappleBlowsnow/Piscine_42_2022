#include<stdio.h>

int ft_str_is_printable(char *str); 
int main()
{
    char *str1;
    char *str2;
    str1 = "9ij\0";
    str2="\0"; 
    char c[2];
    for(int i=0;i<256;i++){
        for(int j=0;j<256;j++){
            c[0]=i;
            c[1]=j;
            printf("%d\n",ft_str_is_printable(c));
        }
    }
    printf("%d\n%d\n",ft_str_is_printable(str1),ft_str_is_printable(str2)); 
}