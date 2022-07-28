#include<stdio.h>
void * ft_print_memory(void *addr, unsigned int size);
int main()
{
    char str[100];
    str[0]=3;
    for(int i =1;i<100;i++){
        str[i]=(1340151*str[i-1])%256;
    }
    printf("%p",str);
    printf("\n%p\n",ft_print_memory(str,91));
    
}