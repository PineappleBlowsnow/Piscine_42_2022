/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:03:24 by yijin             #+#    #+#             */
/*   Updated: 2022/07/09 19:03:28 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;

	a = 'z';
	i = 0;
	while (i <= 25)
	{
		write(1, &a, 1);
		a--;
		i++;
	}
}
