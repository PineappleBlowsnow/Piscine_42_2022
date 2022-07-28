/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:36:02 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 11:36:05 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int	ft_find_index(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '/')
		return (2);
	if (c == '*')
		return (3);
	if (c == '%')
		return (4);
	return (-1);
}

void	ft_op(int n1, char op, int n2)
{
	void	(*f[5])(int, int);

	f[0] = &f_add;
	f[1] = &f_sub;
	f[2] = &f_div;
	f[3] = &f_mul;
	f[4] = &f_mod;
	(*(f[ft_find_index(op)]))(n1, n2);
	write(1, "\n", 1);
}
