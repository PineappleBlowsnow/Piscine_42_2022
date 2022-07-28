#include <unistd.h>

void	printox(unsigned long long adint, int size)
{
	char	*base;
	char	addrstr[16];
	int		i;

	i = 0;
	base = "0123456789abcdef";
	while (i < size)
	{
		addrstr[size - 1 - i] = base[adint % 16];
		i++;
		adint = adint / 16;
	}
	write(1, addrstr, size);
}

void	printsdot(char *s, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (s[i] <= 126 && s[i] >= 32)
			write(1, s + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	printline(void *addr, unsigned int size)
{
	int		ls;
	char	*curr;

	curr = addr;
	ls = 0;
	printox((unsigned long long)curr, 16);
	write(1, ": ", 2);
	while (ls < 16)
	{
		if (ls < size)
			printox(curr[ls], 2);
		else
			write(1, "  ", 2);
		if (ls % 2)
			write(1, " ", 1);
		ls++;
	}
	printsdot(curr, size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr;
	int		cl;
	int		dl;
	int		ls;

	cl = size / 16;
	dl = size % 16;
	curr = addr;
	if (size)
	{
		while (cl)
		{
			printline(curr, 16);
			curr += 16;
			cl--;
		}
		printline(curr, dl);
	}
	return (addr);
}
