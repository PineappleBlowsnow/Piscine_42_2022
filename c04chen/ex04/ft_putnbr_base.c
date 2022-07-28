#include <unistd.h>
int ft_isspace(char c)
{
	if (c == 0x20 || c == 0x09 || c == 0x0a || c == 0x0b || c == 0x0c || c == 0x0d)
		return (c);
	else
		return (0);
}

int ft_strlen(char *str)
{
	char *end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}
int isvalidbase(char *base)
/*
** return 0 if
*/
{
	char *curr;

	curr = base;
	if (!*curr || !curr[1])
		return (0);
	while (*curr)
	{
		if (*curr == '+' || *curr == '-')
			return (0);
		curr++;
	}

	while (*base)
	{
		curr = base + 1;
		while (*curr)
		{
			if (*curr == *base)
				return (0);
			curr++;
		}
		base++;
	}
	return (1);
}

int abs(int t)
{
	if (t < 0)
		return (-t);
	else
		return (t);
}

void ft_putnbr_base_l(int nbr, char *base, int length)
{
	char c;

	if (!isvalidbase(base))
		return;
	if (nbr < 0)
		write(1, "-", 1);
	c = base[abs(nbr % length)];
	nbr = abs(nbr / length);
	if (nbr)
		ft_putnbr_base_l(nbr, base, length);
	write(1, &c, 1);
}
void ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_base_l(nbr, base, ft_strlen(base));
}