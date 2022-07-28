#include<unistd.h>
void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int *temp[size];

    i=0;  
    while(i<size){
        temp[i]=tab[size-1-i]; 
        i++;
    }
    while(i<size){
        tab[i]=temp[i];
        i++;  
    }
}

int main()
{
    int *tab[5]={1,3,5,7,9};
    write(1,tab,6); 
    ft_rev_int_tab(tab,5);
    write(1,tab,5); 
}