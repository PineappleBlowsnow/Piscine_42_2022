/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:55:03 by yijin             #+#    #+#             */
/*   Updated: 2022/07/15 23:55:05 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	count_minus;
	int	nb;

	count_minus = 1;
	while (ft_isspace(*str))
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			count_minus *= -1;
		str++;
	}
	nb = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		nb = nb * 10 + count_minus * (*str - '0');
		str++;
	}
	return (nb);
}
