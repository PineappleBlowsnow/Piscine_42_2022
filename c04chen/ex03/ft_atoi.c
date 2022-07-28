int ft_isspace(char c)
{
	if (c == 0x20 || c == 0x09 || c == 0x0a || c == 0x0b || c == 0x0c || c == 0x0d)
		return (c);
	else
		return (0);
}

int ft_atoi(char *str)
{
	int sy;
	int n;

	sy = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sy *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += sy * (int)(*str - '0');
		str++;
	}
	return (n);
}
