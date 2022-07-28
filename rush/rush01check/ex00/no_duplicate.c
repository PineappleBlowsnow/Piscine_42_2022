/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:13:00 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:14:34 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	no_duplicate(int **map, int cell, int cell_value)
{
	int	i;

	i = cell;
	while (i / 4 != 0)
	{
		i = i - 4;
		if (map[i / 4][i % 4] == cell_value)
			return (0);
	}
	i = cell;
	while (i % 4 != 0)
	{
		i--;
		if (map[i / 4][i % 4] == cell_value)
			return (0);
	}
	return (1);
}
