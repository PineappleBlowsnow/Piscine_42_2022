/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_boxes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:02:01 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:02:44 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_boxes(int *comb)
{
	int	i;
	int	nb_boxes;
	int	height;

	i = 0;
	nb_boxes = 0;
	height = 0;
	while (i < 4)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i++;
	}
	return (nb_boxes);
}
