/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:13:39 by vho               #+#    #+#             */
/*   Updated: 2022/07/17 21:16:47 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_param(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		if (str[i + 1] == '\0' && !(str[i] >= '1' && str[i] <= '4'))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}