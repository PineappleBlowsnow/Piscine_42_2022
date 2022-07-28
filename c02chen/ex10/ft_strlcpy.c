unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;

	l = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		l++;
		size--;
	}
	if (size)
		*dest = '\0';
	while (*src)
	{
		l++;
		src++;
	}
	return (l);
}
