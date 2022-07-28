/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:27:59 by yijin             #+#    #+#             */
/*   Updated: 2022/07/16 11:28:01 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_base_is_not_ok(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (*base == '\0' || ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	count_minus;
	int	nb;

	count_minus = 1;
	if (ft_base_is_not_ok(base))
		return (0);
	while (ft_isspace(*str))
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			count_minus *= -1;
		str++;
	}
	nb = 0;
	while (ft_index(*str, base) != -1)
	{
		nb = nb * ft_strlen(base) + count_minus * (ft_index(*str, base));
		str++;
	}
	return (nb);
}
