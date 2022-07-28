#include<stdio.h>
void ft_rev_int_tab(int *tab, int size); 

int main()
{
    int i; 
    i=0;
    int tab[100]={1,3,5,7,9,9,9};
    ft_rev_int_tab(tab,100);
    
    while(i<=4)
    {
        printf("%d ,", tab[i]); 
        i++; 
    }
}
