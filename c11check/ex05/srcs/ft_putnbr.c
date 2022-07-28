/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:18:05 by yijin             #+#    #+#             */
/*   Updated: 2022/07/15 22:18:08 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long long	nb1;
	char		c;

	nb1 = nb;
	if (nb1 < 0)
	{
		nb1 = -nb1;
		write(1, "-", 1);
	}
	if (nb1 / 10)
		ft_putnbr(nb1 / 10);
	c = nb1 % 10 + '0';
	write(1, &c, 1);
}
