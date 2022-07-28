/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:45:13 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 15:45:19 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>
#include <stdlib.h>

void	is_valid_comb_incre(int j, char **dest, int *pi)
{
	int	i;
	int	m;
	int	k;
	int	l;

	i = j % 4;
	m = (j / 4) % 4;
	k = (j / 16) % 4;
	l = (j / 64) % 4;
	if (i != m && i != k && i != l && m != k && m != l && k != l)
	{
		*dest = malloc(sizeof(**dest) * 5);
		(*dest)[0] = '1' + i;
		(*dest)[1] = '1' + m;
		(*dest)[2] = '1' + k;
		(*dest)[3] = '1' + l;
		(*dest)[4] = 0;
		(*pi)++;
	}
}

char	**creatcombtable(void)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(*result) * 24);
	j = 27;
	i = 0;
	while (j <= 228)
	{
		is_valid_comb_incre(j, &(result[i]), &i);
		j++;
	}
	return (result);
}

void	free_combination(char **comb)
{
	int	i;

	i = 0;
	while (i < 24)
	{
		free(comb[i]);
		i++;
	}
	free(comb);
}

void	write_map(char map[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, map[i] + j, 1);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

int	solve(char map[4][4], char **combination, char **argv, int index)
{
	int	i;

	if (index == 4)
	{
		write_map(map);
		return (1);
	}
	i = 0;
	while (i < 24)
	{
		if (is_valid_fil(map, combination[i], argv, index))
		{
			if (solve(map, combination, argv, index + 1))
				return (1);
		}
		i++;
	}
	return (0);
}
