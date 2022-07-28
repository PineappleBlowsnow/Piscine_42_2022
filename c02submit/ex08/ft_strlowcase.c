/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:50:12 by yijin             #+#    #+#             */
/*   Updated: 2022/07/12 18:50:16 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*st;

	st = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			*str = *str + 32;
		str++;
	}
	return (st);
}
