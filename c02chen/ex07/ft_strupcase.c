char	*ft_strupcase(char *str)
{
	char	*re;

	re = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str += - 'a' + 'A';
		str++;
	}
	return (re);
}
