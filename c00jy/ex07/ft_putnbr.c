/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:27:08 by yijin             #+#    #+#             */
/*   Updated: 2022/07/10 14:27:23 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	num(int nb)
{
	int	i;

	i = 1;
	while (nb / 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	mille(int n)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	while (i < n)
	{
		a = a * 10;
		i++;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int		n;	
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	n = num(nb);
	while (n)
	{
		c = '0' + nb / mille(n);
		write(1, &c, 1);
		nb = nb % (mille(n));
		n--;
	}
}
