/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblatier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:42:30 by mblatier          #+#    #+#             */
/*   Updated: 2022/07/09 15:42:31 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1) && (j == 1))
				ft_putchar('/');
			else if (((i == 1) && (j == x)) || ((i == y) && (j == 1)))
				ft_putchar('\\');
			else if ((i == y) && (j == x))
				ft_putchar('/');
			else if (((i == 1) || (i == y)) || ((j == 1) || (j == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
