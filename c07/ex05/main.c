#include <stdio.h>
#include <stdlib.h>
char **ft_split(char *str, char *charset);

int main()
{
    char **res;
    //char str[] = "2ab12cd12ef1g3a2";
    char str[] = "4cse4cse4cse4cse";
    char charset[] = "4cse";
    res = ft_split(str, charset);

    int i = 0;
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }

    free(res);
}