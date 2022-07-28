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

char	*ft_strcapitalize(char *str)
{
	int		f;
	char	*start;

	start = str;
	f = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str>='0' && *str<='9'))
		{
			f = 1;
		}
		else if (f == 1)
		{	
			if(*str>='a' && *str<='z')
				*str += 'A' - 'a';
			f = 0;
		}
		str++;
	}
	return (start);
}
