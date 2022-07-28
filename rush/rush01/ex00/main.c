/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:44:51 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 15:44:55 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		status;
	char	map[4][4];
	char	**combination;

	(void)argc;
	(void)argv;
	if (!input_is_valid(argc, argv))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	status = 0;
	combination = creatcombtable();
	if (!solve(map, combination, argv, 0))
	{
		status = -1;
		write(1, "Error\n", 6);
	}
	free_combination(combination);
	return (status);
}

int	input_is_valid(int argc, char **argv)
{
	char	c;
	int		i;

	i = 0;
	if (argc != 2 || ft_strlen(argv[1]) != 31)
		return (0);
	while (i < 31)
	{
		c = argv[1][i];
		if (i % 2 == 0 && (c > '4' || c < '1'))
			return (0);
		if ((i % 2 == 1) && !ft_isspace(c))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}
