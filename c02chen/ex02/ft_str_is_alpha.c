int	ft_str_is_alpha(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (!(c <= 'z' && c >= 'a') && !(c <= 'Z' && c >= 'A'))
			return (0);
		str++;
	}
	return (1);
}
