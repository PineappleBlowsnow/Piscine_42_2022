/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:12:22 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:20:28 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	map_is_ok(int **map, int *clean_param);
int	no_duplicate(int **map, int cell, int cell_value);

int	ft_solver(int **map, int cell, int *clean_param)
{
	int	cell_value;

	if (cell == 16 && map_is_ok(map, clean_param))
		return (1);
	if (cell < 16)
	{
		cell_value = 1;
		while (cell_value <= 4)
		{
			if (no_duplicate(map, cell, cell_value))
			{
				map[cell / 4][cell % 4] = cell_value;
				if (ft_solver(map, cell + 1, clean_param))
				{
					return (1);
				}
			}
			cell_value++;
		}
	}
	return (0);
}
