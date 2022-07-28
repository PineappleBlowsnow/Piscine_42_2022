#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);
int main()
{
    int *tab;
    tab =ft_range(2,7);
    for (int i=0;i<=4;i++)
    {
        printf("%d\n",tab[i]);
    }
    free(tab);
}