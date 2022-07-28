#include<unistd.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	long long	nb1;
	char		c;

	nb1 = nb;
	if (nb1 < 0)
	{
		nb1 = -nb1;
		write(1, "-", 1);
	}
	if (nb1 / 10)
		ft_putnbr(nb1 / 10);
	c = nb1 % 10 + '0';
	write(1, &c, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
    while(par->str)
    {
        write(1,par->str,par->size);
        write(1,"\n",1);
        ft_putnbr(par->size);
        write(1,"\n",1);
        write(1,par->copy,par->size);
        write(1,"\n",1);
        par++;
    }
}
