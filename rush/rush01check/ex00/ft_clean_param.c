/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:14:05 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:26:06 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_clean_param(char *str)
{
	int	*clean_param;
	int	i;
	int	j;

	clean_param = malloc(sizeof(int) * 16);
	if (!clean_param)
		return (clean_param);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			clean_param[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (clean_param);
}
