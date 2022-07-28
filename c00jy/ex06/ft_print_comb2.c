/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:56:49 by yijin             #+#    #+#             */
/*   Updated: 2022/07/10 09:56:53 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	incre(char *td)
{
	if (*(td + 1) == '9')
	{
		(*td)++;
		*(td + 1) = '0';
		if (*td > '9')
			*td = '\0';
	}
	else
		(*(td + 1))++;
}

int	comp(char	*td1, char	*td2)
{
	if (*td1 == *td2)
	{
		if (*(td1 + 1) < *(td2 + 1))
			return (1);
		else
			return (0);
	}
	else if (*td1 < *td2)
		return (1);
	else
		return (0);
}

void	ft_print_comb2(void)
{
	char	td1[2];
	char	td2[2];

	td1[0] = '0';
	td1[1] = '0';
	while (td1[0])
	{
		td2[0] = td1[0];
		td2[1] = td2[1];
		while (td2[0])
		{
			if (comp(td1, td2))
			{
				write(1, td1, 2);
				write(1, " ", 1);
				write(1, td2, 2);
				if (comp(td1, "98"))
					write(1, ", ", 2);
			}
			incre(td2);
		}
		incre(td1);
	}
}
