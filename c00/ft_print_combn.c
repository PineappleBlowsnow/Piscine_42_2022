#include <unistd.h>

void wcom(char *buf, int index, int n);

void ft_print_combn(int n)
{
	char buf[n];
	for (char c = '0'; c <= '9'; c++)
	{
		buf[0] = c;
		wcom(buf, 0, n);
	}
}
void wcom(char *buf, int index, int n)
{
	if (index == (n - 1))
	{

		write(1, buf, n);
		if (buf[0] != '9' - n + 1)
			write(1, ", ", 2);
		return;
	}
	for (char c = buf[index] + 1; c <= '9'; c++)
	{
		buf[index + 1] = c;
		wcom(buf, index + 1, n);
	}
}
