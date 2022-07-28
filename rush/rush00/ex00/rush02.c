/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblatier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:16:33 by mblatier          #+#    #+#             */
/*   Updated: 2022/07/09 15:44:33 by yijin            ###   ########.fr       */
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
			if (((i == 1) && (j == 1)) || ((i == 1) && (j == x)))
				ft_putchar('A');
			else if (((i == y) && (j == 1)) || ((i == y) && (j == x)))
				ft_putchar('C');
			else if (((i == 1) || (i == y)))
				ft_putchar('B');
			else if ((j == 1) || (j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
