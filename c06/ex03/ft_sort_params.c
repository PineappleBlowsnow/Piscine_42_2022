/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:25:48 by yijin             #+#    #+#             */
/*   Updated: 2022/07/20 00:25:49 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcom(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void ft_swap(char *s1, char *s2)
{
	char * temp;

	temp = s1;
	s1 = s2;
	s2 = temp;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j <= ac - 1)
		{
			if (ft_strcom(av[i], av[j]) > 0)
				ft_swap(av[i],av[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= ac - 1)
	{
		ft_putstr(av[i]);
		i++;
	}
}
