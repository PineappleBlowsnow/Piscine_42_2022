/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:07:29 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:34:27 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_create_map(void)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int *) * 4);
	if (!tab)
		return (tab);
	while (i < 4)
	{
		tab[i] = malloc(sizeof(int) * 4);
		if (!tab[i])
			return (tab);
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
