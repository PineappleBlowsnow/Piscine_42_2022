/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:16:51 by yijin             #+#    #+#             */
/*   Updated: 2022/07/11 23:16:54 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = src;
	while (*p)
	{
		dest[i] = *p;
		p++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
