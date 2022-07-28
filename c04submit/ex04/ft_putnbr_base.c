/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:17:16 by yijin             #+#    #+#             */
/*   Updated: 2022/07/16 01:17:19 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}

int	ft_base_is_not_ok(char *base)
{
	int				i;
	int				j;

	i = 0;
	if (*base == '\0' || ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	nbr1;
	char			c;

	if (ft_base_is_not_ok(base))
		return ;
	nbr1 = nbr;
	if (nbr1 < 0)
	{
		nbr1 = -nbr1;
		write(1, "-", 1);
	}
	if (nbr1 / ft_strlen(base))
		ft_putnbr_base(nbr1 / ft_strlen(base), base);
	c = *(base + nbr1 % ft_strlen(base));
	write(1, &c, 1);
}
