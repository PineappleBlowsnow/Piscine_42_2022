#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b); 

int main()
{
	int a; 
	int b; 
	int *c;
	int *d;
	a=10; 
	b=-9; 
	c=&a;
	d=&b; 
	printf("%d %d\n",*c,*d);
	ft_ultimate_div_mod(c,d); 
	printf("%d %d\n",*c,*d); 
	
}