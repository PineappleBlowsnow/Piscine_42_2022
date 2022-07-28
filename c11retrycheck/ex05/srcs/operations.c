/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:35:19 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 11:35:23 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	f_add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
}

void	f_div(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : division by zero", 23);
	}
	else
		ft_putnbr(n1 / n2);
}

void	f_mod(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
	}
	else
		ft_putnbr(n1 % n2);
}

void	f_sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
}

void	f_mul(int n1, int n2)
{
	ft_putnbr(n1 * n2);
}
