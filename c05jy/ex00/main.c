#include<stdio.h>

int ft_iterative_factorial(int nb);
int main()
{
    int nb; 
    nb=8; 
    printf("%d\n",ft_iterative_factorial(nb));
    nb=1; 
    printf("%d\n",ft_iterative_factorial(nb));
    nb=-1; 
    printf("%d\n",ft_iterative_factorial(nb));
}