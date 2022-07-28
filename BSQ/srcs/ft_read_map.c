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

int ft_all_is(char *str, char a, char b, char c)
{
	while (*str)
	{
		if (*str != a && *str != b && *str != c)
			return (0);

		str++;
	}
	return (1);
}

void free_strs(char **strs)
{
	char **curr;

	curr = strs;
	while (*curr)
	{
		free(*curr);
		curr++;
	}
	free(strs);
}

t_map ft_read_map(char *filecontent)
{

	t_map mp;
	char *curr;
	int size;
	int i;
	int length;

	size = 0;
	mp.map = NULL;
	curr = filecontent;
	// ft_putstr(curr);
	while (*curr && *curr != '\n')
	{
		size++;
		curr++;
	}

	if (*curr == 0 || size < 4)
		return mp;
	mp.height = 0;
	i = 0;

	while (i < size - 3)
	{
		if (filecontent[i] > '9' || filecontent[i] < '0')
			return mp;
		mp.height *= 10;
		mp.height += filecontent[i] - '0';
		i++;
	}

	mp.empty = filecontent[size - 3];
	mp.obstacle = filecontent[size - 2];
	mp.full = filecontent[size - 1];

	curr++;
	length = ft_strlen(curr);
	if (length % mp.height)
		return (mp);

	mp.map = ft_split(curr, "\n");
	mp.width = length / mp.height - 1;
	i = 0;
	while (mp.map[i])
	{
		if (ft_strlen(mp.map[i]) != mp.width || !ft_all_is(mp.map[i], mp.empty, mp.obstacle, mp.full))
		{
			free_strs(mp.map);
			mp.map = NULL;
			return (mp);
		}
		i++;
	}
	if (i != mp.height)
	{
		free_strs(mp.map);
		mp.map = NULL;
		return (mp);
	}
	return (mp);
}
