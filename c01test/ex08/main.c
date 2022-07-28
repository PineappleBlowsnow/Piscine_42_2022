#include<stdio.h>

void ft_sort_int_tab(int *tab, int size); 

int main()
{
    int i=0; 
    int tab1[100]={443423,4,234,423,4234,24,3,3,3,3,3,3,2,1,5}; 
    int tab2[5]={2,3,0,1,5};
    ft_sort_int_tab(tab1,5);
    ft_sort_int_tab(tab2,5);
    while(i<5)
    {
        printf("%d ",tab1[i]); 
        i++; 
    }
    i=0; 
    while(i<5)
    {
        printf("%d ",tab2[i]);
        i++; 
    }
}