char	*ft_strlowcase(char *str)
{
	char	*re;

	re = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
	return (re);
}
