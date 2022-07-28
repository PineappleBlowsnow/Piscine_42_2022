/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:35:56 by yijin             #+#    #+#             */
/*   Updated: 2022/07/27 23:35:58 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	max(int i, int j)
{
	if (i > j)
		return (i);
	else
		return (j);
}

int	min(int i, int j)
{
	if (i < j)
		return (i);
	else
		return (j);
}

void	ft_print_2d(char **mp, int height, int width)
{
	int	i;

	i = 0;
	while (i < height)
	{
		write(1, mp[i], width);
		write(1, "\n", 1);
		i++;
	}
}

void	free_2d_char(char **map, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	free_2d_int(int **map, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

t_matrix	create_matrix(int row, int col)
{
	int i;
	int j;
	t_matrix mx;

	mx.col = col;
	mx.row = row;
	mx.data = malloc((sizeof(*(mx.data))) * (mx.row));
	i = 0;
	while (i < row)
	{
		mx.data[i] = malloc(sizeof(*(mx.data[i])) * col);
		j = 0;
		while (j < mx.col)
		{
			mx.data[i][j] = 0;
			j++;
		}
		i++;
	}
	return (mx);
}

void	ft_solve(t_map mp)
{
	t_matrix dp;
	int i;
	int j;
	t_max_memo mm;

	mm.size = 0;
	dp = create_matrix(mp.height + 1, mp.width + 1);
	i = 1;

	while (i < dp.row)
	{
		j = 1;
		while (j < dp.col)
		{
			if (mp.map[i - 1][j - 1] == mp.empty)
				dp.data[i][j] = min(
									min(dp.data[i - 1][j], dp.data[i - 1][j - 1]),
									min(dp.data[i][j - 1], dp.data[i - 1][j - 1])) +
								1;
			if (dp.data[i][j] > mm.size)
			{
				mm.size = dp.data[i][j];
				mm.start_row = i - 1;
				mm.start_col = j - 1;
			}
			j++;
		}
		i++;
	}

	i = mm.start_row - mm.size + 1;
	while (i <= mm.start_row)
	{
		j = mm.start_col - mm.size + 1;
		while (j <= mm.start_col)
		{
			mp.map[i][j] = mp.full;
			j++;
		}
		i++;
	}
	ft_print_2d(mp.map, mp.height, mp.width);
	free_2d_char(mp.map, mp.height);
	free_2d_int(dp.data, dp.row);
}
