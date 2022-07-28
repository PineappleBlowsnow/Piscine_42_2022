#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

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
	printf("%d %d\n",a,b);
	ft_div_mod(a,b,c,d); 
	printf("%d %d\n",a,b);
	
}