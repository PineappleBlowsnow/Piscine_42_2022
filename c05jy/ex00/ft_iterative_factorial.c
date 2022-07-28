int ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	if (nb == 1||nb==0)
		return (1);
	if(nb<0)
		return (0);
	result = nb;
	while (i < nb)
	{
		result *= nb - i;
		i++;
	}
	return (result);
}