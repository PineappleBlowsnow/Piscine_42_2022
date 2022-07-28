#include<stdio.h>
#include<stdlib.h>

char *ft_strdup(char *src);
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
    char test[]="how are you?";
    char *p;
  
    p = ft_strdup(test);
    printf("%s\n%d\n",p,ft_strcmp(test,p));
    
    free(p);
}