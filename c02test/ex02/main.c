#include<stdio.h>

int ft_str_is_alpha(char *str); 

int main()
{
       
    printf("%d\n",ft_str_is_alpha(""));
    printf("%d\n",ft_str_is_alpha("lfajdkfJLKJ"));
    printf("%d\n",ft_str_is_alpha("lfajdkf3JLKJ"));
    printf("%d\n",ft_str_is_alpha("32lfajdkf3JLKJ"));
    printf("%d\n",ft_str_is_alpha("\nlfajdkf3JLKJ"));
    printf("%d\n",ft_str_is_alpha("\032lfajdkf3JLKJ"));
    printf("%d\n",ft_str_is_alpha("\0lfajdkf3JLKJ"));
}