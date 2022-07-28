/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_combis.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:00:14 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:11:10 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input_combis_col(int *clean_param)
{
	int	column;

	column = 0;
	while (column <= 3)
	{
		if (clean_param[column] + clean_param[column + 4] > 5)
			return (0);
		if (clean_param[column] == 4 && clean_param[column + 4] != 1)
			return (0);
		column++;
	}
	column = 7;
	while (column >= 4)
	{
		if (clean_param[column] == 4 && clean_param[column - 4] != 1)
			return (0);
		column--;
	}
	return (1);
}

int	ft_check_input_combis_row(int *clean_param)
{
	int	row;

	row = 8;
	while (row <= 11)
	{
		if (clean_param[row] + clean_param[row + 4] > 5)
			return (0);
		if (clean_param[row] == 4 && clean_param[row + 4] != 1)
			return (0);
		row++;
	}
	row = 15;
	while (row >= 12)
	{
		if (clean_param[row] == 4 && clean_param[row - 4] != 1)
			return (0);
		row--;
	}
	return (1);
}
