#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main()
{
    //char str1[] = "Bonjour\nles\namin\nches\n\tc est fou\ntout\nce qu on peut faire avec\t print_memory\n \n\alol.lol\t\b?";
    //printf("%p \n", ft_print_memory(str1, 10));
    //printf("%p \n", ft_print_memory(str1, 90));
    char src[256];
    for (int k = 1; k < 255; k++)
    {
        src[k-1] = k;
    }
    src[255]=0;
    char * ori=src;
    char* final=ft_print_memory(src, 255);
    printf("ori:%p  return value : %p",ori,final);

}