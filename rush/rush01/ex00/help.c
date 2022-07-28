/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:45:34 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 15:45:36 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>
#include <stdlib.h>

int	count_boxes(char *comb)
{
	int		i;
	int		nb_boxes;
	char	height;

	i = 0;
	nb_boxes = 0;
	height = '0';
	while (i < 4)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i++;
	}
	return (nb_boxes);
}

int	count_boxes_reverse(char *comb)
{
	int		i;
	int		nb_boxes;
	char	height;

	i = 3;
	nb_boxes = 0;
	height = '0';
	while (i >= 0)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i--;
	}
	return (nb_boxes);
}

int	is_valid_col(char map[4][4], char **argv)
{	
	int		i;
	char	l;
	char	r;
	char	cmbcol[4];

	i = 0;
	while (i < 4)
	{
		cmbcol[0] = map[0][i];
		cmbcol[1] = map[1][i];
		cmbcol[2] = map[2][i];
		cmbcol[3] = map[3][i];
		if (cmbcol[0] == cmbcol[1] || cmbcol[0] == cmbcol[2]
			|| cmbcol[0] == cmbcol[3] || cmbcol[1] == cmbcol[2]
			|| cmbcol[1] == cmbcol[3] || cmbcol[2] == cmbcol[3])
			return (0);
		l = argv[1][(1 - 1 + i) * 2];
		r = argv[1][(5 - 1 + i) * 2];
		if (count_boxes(cmbcol) != l - '0'
			|| count_boxes_reverse(cmbcol) != r - '0')
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_fil(char map[4][4], char *cmb, char **argv, int index)
{
	char	l;
	char	r;

	map[index][0] = cmb[0];
	map[index][1] = cmb[1];
	map[index][2] = cmb[2];
	map[index][3] = cmb[3];
	l = argv[1][(9 - 1 + index) * 2];
	r = argv[1][(13 - 1 + index) * 2];
	if (count_boxes(cmb) != l - '0' || count_boxes_reverse(cmb) != r - '0')
		return (0);
	if (index == 3 && !is_valid_col(map, argv))
		return (0);
	return (1);
}

int	ft_isspace(char c)
{
	if (c == 0x20 || c == 0x09 || c == 0x0a
		|| c == 0x0b || c == 0x0c || c == 0x0d)
		return (c);
	else
		return (0);
}
