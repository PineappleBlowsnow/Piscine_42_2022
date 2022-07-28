#include<stdio.h>
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
    
    int *tab;
    int size; 

    printf("%d\n",ft_ultimate_range(&tab,0,5));
    free(tab);
    size=ft_ultimate_range(&tab,0,5);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",tab[i]);
    }

    free (tab);
}