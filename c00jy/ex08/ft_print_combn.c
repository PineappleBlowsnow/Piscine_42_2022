 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:40:03 by yijin             #+#    #+#             */
/*   Updated: 2022/07/10 15:40:07 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num(char *buff, int id, int n)
{
	if ((id - 1) == (n - 1))
	{
		write(1, buff, n);
		if ((buff[0] != '9' - (n - 1)))
			write(1, ", ", 2);
		return ;
	}
	buff[id] = buff[id - 1] + 1;
	while ((buff[id]) <= '9')
	{
		num(buff, id + 1, n);
		buff[id]++;
	}
}

void	ft_print_combn(int n)
{
	char	buff[10];

	buff[0] = '0';
	while (buff[0] <= '9')
	{
		num(buff, 1, n);
		buff[0]++;
	}
}
