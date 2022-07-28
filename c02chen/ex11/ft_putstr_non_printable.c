#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*od;
	char			ox[3];
	unsigned char	c;

	ox[0] = '\\';
	od = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			c = *str;
			ox[1] = od[c / 16];
			ox[2] = od[c % 16];
			write(1, ox, 3);
		}
		str++;
	}
}
