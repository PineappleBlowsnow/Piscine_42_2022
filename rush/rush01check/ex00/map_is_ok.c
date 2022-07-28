/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_ok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:01:05 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 22:28:07 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_boxes(int *comb);
int	count_boxes_reverse(int *comb);

int	row_is_ok(int **map, int *clean_param)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (count_boxes(map[x]) != clean_param[8 + x]
			|| count_boxes_reverse(map[x]) != clean_param[12 + x])
			return (0);
		x++;
	}
	return (1);
}

int	column_is_ok(int **map, int *clean_param, int x, int y)
{
	int	*column;

	column = malloc(sizeof(int) * 4);
	if (!column)
		return (0);
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			column[y] = map[y][x];
			y++;
		}
		if (count_boxes(column) != clean_param[x]
			|| count_boxes_reverse(column) != clean_param[x + 4])
		{
			free(column);
			return (0);
		}
		x++;
	}
	free(column);
	return (1);
}

int	map_is_ok(int **map, int *clean_param)
{
	if (!row_is_ok(map, clean_param))
		return (0);
	if (!column_is_ok(map, clean_param, 0, 0))
		return (0);
	return (1);
}
