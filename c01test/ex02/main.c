#include<stdio.h>

void ft_swap(int *a, int *b);
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
	ft_swap(c,d);
	printf("%d %d\n",a,b);
	
}
