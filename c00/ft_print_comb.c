#include <unistd.h>
void ft_print_comb(void)
{
	int b = 1;
	char buf[3];
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = i + 1; j <= '9'; j++)
		{
			for (char k = j + 1; k <= '9'; k++)
			{
				if (b)
					b = 0;
				else
					write(1, ", ", 2);
				buf[0] = i;
				buf[1] = j;
				buf[2] = k;
				write(1, buf, 3);
			}
		}
	}
}
