#include <unistd.h>
int abs(int t)
{
	if (t > 0)
		return (t);
	else
		return (-t);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
	}
	c = '0' + abs(nb % 10);
	nb = abs(nb / 10);
	if (nb)
		ft_putnbr(nb);
	write(1, &c, 1);
}