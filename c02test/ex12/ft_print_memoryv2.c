/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:25:58 by yijin             #+#    #+#             */
/*   Updated: 2022/07/13 17:26:00 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first_colomn(char *str)
{
	char				*hextab;
	char				tab[16];
	unsigned long long	addr;
	int					i;

	hextab = "0123456789abcdef";
	i = 15;
	addr = (unsigned long long)str;
	while (i >= 0)
	{
		tab[i] = hextab[addr % 16];
		addr = addr / 16;
		i--;
	}
	write(1, tab, 16);
	write(1, ": ", 2);
}

void	ft_print_second_colomn(char *str, int length)
{
	char			*hextab;
	int				i;
	unsigned char 	uc;

	hextab = "0123456789abcdef";
	i = 1;
	while (i <= 16)
	{
		if (i <= length)
		{
			uc=(unsigned char)*str; 
			write(1, hextab + uc / 16, 1);
			write(1, hextab + uc % 16, 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 0)
			write(1, " ", 1);
		str++;
		i++;
	}
}

int	ft_str_is_nonprintable(char *str)
{
	if ((*str < 32) || (*str == 127))
		return (1);
	else
		return (0);
}

void	ft_print_third_colomn(char *str, int length)
{
	while (length > 0)
	{
		if (ft_str_is_nonprintable(str))
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
		length--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*p;

	p = addr;
	if (size == 0)
		return (p);
	i = 16;
	while (i <= size)
	{
		ft_print_first_colomn(addr);
		ft_print_second_colomn(addr, 16);
		ft_print_third_colomn(addr, 16);
		write(1, "\n", 1);
		addr = addr + 16;
		i = i + 16;
	}
	if (size % 16)
	{
		ft_print_first_colomn(addr);
		ft_print_second_colomn(addr, size % 16);
		ft_print_third_colomn(addr, size % 16);
		write(1, "\n", 1);
	}
	return (p);
}
