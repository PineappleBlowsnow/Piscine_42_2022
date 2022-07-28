/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:33:41 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 09:33:44 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_help(int nb, int half_nb)
{
	if (half_nb == 1)
		return (1);
	else if (nb % half_nb == 0)
		return (0);
	else
		return (ft_is_prime_help(nb, half_nb - 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (ft_is_prime_help(nb, nb / 2))
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
