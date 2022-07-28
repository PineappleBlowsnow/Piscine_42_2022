/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:02:33 by yijin             #+#    #+#             */
/*   Updated: 2022/07/23 19:02:35 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	char	*start;

	start = src;
	while (*src)
		src++;
	return (src - start);
}

char	*ft_strdup(char *src)
{
	char	*st;
	int		i;

	st = malloc(sizeof(*st) * (ft_strlen(src) + 1));
	if (!st)
		return (NULL);
	i = 0;
	while (src[i])
	{
		st[i] = src[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}
