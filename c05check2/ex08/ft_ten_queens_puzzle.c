/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:35:22 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 09:35:24 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_queen_of_index_is_ok(char *buff, char queen, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (queen == buff[i] || (index - i == queen - buff[i])
			|| (index - i == buff[i] - queen))
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_queens(char *buff, int index, int *p)
{
	char	queen;

	if (index - 1 == 9)
	{
		write(1, buff, 10);
		write(1, "\n", 1);
		(*p)++;
	}
	queen = '0';
	while (queen <= '9')
	{
		if (ft_check_queen_of_index_is_ok(buff, queen, index))
		{
			buff[index] = queen;
			ft_add_queens(buff, index + 1, p);
		}
		queen++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		count;
	char	buff[10];

	count = 0;
	buff[0] = '0';
	while (buff[0] <= '9')
	{
		ft_add_queens(buff, 1, &count);
		buff[0]++;
	}
	return (count);
}
