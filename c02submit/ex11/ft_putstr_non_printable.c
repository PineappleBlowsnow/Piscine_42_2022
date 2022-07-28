/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:53:39 by yijin             #+#    #+#             */
/*   Updated: 2022/07/13 11:53:47 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_nonprintable(char *str)
{
	if ((*str < 32) || (*str == 127))
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hextab;
	unsigned char	uc;

	hextab = "0123456789abcdef";
	while (*str)
	{
		if (ft_char_is_nonprintable(str))
		{
			uc = (unsigned char)*str;
			write(1, "\\", 1);
			write(1, hextab + uc / 16, 1);
			write(1, hextab + uc % 16, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
