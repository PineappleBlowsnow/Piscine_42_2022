/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_boxes_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:05:20 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:05:26 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_boxes_reverse(int *comb)
{
	int	i;
	int	nb_boxes;
	int	height;

	i = 3;
	nb_boxes = 0;
	height = 0;
	while (i >= 0)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i--;
	}
	return (nb_boxes);
}
