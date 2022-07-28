/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:07:43 by yijin             #+#    #+#             */
/*   Updated: 2022/07/23 19:08:53 by yijin            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*st;

	st = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (st);
}

int	ft_allocated_memo(int size, char **strs, char *sep)
{
	int	num;
	int	i;

	i = 0;
	if (size == 0)
		return (1);
	num = 0;
	while (i < size)
	{
		num += ft_strlen(*(strs + i));
		i++;
	}
	num = num + (size - 1) * ft_strlen(sep) + 1;
	return (num);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		num;

	num = ft_allocated_memo(size, strs, sep);
	res = malloc(sizeof(*res) * num);
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < size)
	{
		res = ft_strcat(res, *(strs + i));
		if (i != (size - 1))
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}
