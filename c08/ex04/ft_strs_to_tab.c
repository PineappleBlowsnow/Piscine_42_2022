/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:19:39 by yijin             #+#    #+#             */
/*   Updated: 2022/07/24 15:19:41 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = src;
	while (*p)
	{
		dest[i] = *p;
		p++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_failure_malloc(int i, t_stock_str *res)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(res[j].copy);
		j++;
	}
	free(res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = 0;
	res = malloc(sizeof(*res) * (ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = malloc(sizeof(char *) * (ft_strlen(av[i]) + 1));
		if (!res[i].copy)
		{
			ft_failure_malloc(i, res);
			return (NULL);
		}
		ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[ac].str = 0;
	return (res);
}
