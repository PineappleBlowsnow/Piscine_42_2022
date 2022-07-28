int ft_strlen(char *str)
{
	char *end;
	
	end = str;
	while (*end)
		end++;
	return (end - str);
}