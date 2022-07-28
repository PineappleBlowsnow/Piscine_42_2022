#include "ft_stock_str.h"
#include<stdlib.h>
void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int ac, char ** av)
{
    struct s_stock_str *par;
    par = ft_strs_to_tab(ac,av);
    ft_show_tab(par);
    free(par);
}