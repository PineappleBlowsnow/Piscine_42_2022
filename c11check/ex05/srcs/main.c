/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:35:40 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 11:35:43 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_op_is_valid(char *op)
{
	if (ft_strlen(op) != 1)
		return (0);
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	if (argc != 4)
		return (-1);
	if (!ft_op_is_valid(argv[2]))
	{
		write(1, "0\n", 2);
		return (-1);
	}
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	ft_op(nb1, *(argv[2]), nb2);
	return (0);
}
