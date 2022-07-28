#include <unistd.h>
void ft_print_comb2(void)
{
	int b = 1;
	char buf[5];
	buf[2] = ' ';
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = '0'; j <= '9'; j++)
		{
			for (char k = '0'; k <= '9'; k++)
			{
				for (char l = '0'; l <= '9'; l++)
				{
					if (k > i || (k == i && l > j))
					{
						if (b)
							b = 0;
						else
							write(1, ", ", 2);
						buf[0] = i;
						buf[1] = j;
						buf[3] = k;
						buf[4] = l;
						write(1, buf, 5);
					}
				}
			}
		}
	}
}