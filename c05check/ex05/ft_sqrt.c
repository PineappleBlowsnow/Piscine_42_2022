/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:58:28 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 08:58:30 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_help(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = ft_sqrt_help(nb / 4);
	if (nb < (2 * i + 1) * (2 * i + 1))
		return (2 * i);
	else
		return (2 * i + 1);
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = ft_sqrt_help(nb);
	if (nb == sqrt * sqrt)
		return (sqrt);
	else
		return (0);
}
