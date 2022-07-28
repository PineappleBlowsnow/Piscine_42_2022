#include<stdio.h>

int ft_recursive_factorial(int nb);
int main()
{
    int nb; 
    nb=8; 
    printf("%d\n",ft_recursive_factorial(nb));
    nb=1; 
    printf("%d\n",ft_recursive_factorial(nb));
    nb=-1; 
    printf("%d\n",ft_recursive_factorial(nb));
}