/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:43:26 by yijin             #+#    #+#             */
/*   Updated: 2022/07/12 22:43:29 by yijin            ###   ########.fr       */
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

int	ft_lettre(char *str)
{
	if (((*str <= 'z') && (*str >= 'a')) || ((*str <= 'Z') && (*str >= 'A')))
		return (1);
	else if ((*str <= '9') && (*str >= '0'))
		return (1);
	else
		return (0);
}

int	ft_nonalphanumeric(char *str)
{
	if (ft_lettre(str))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*st;

	str = ft_strlowcase(str);
	st = str;
	if ((*str <= 'z') && (*str >= 'a'))
		*str = *str - 32;
	str++;
	while (*str)
	{
		if ((*str <= 'z') && (*str >= 'a'))
		{
			if (ft_nonalphanumeric(str - 1))
				*str = *str - 32;
		}
		str++;
	}
	return (st);
}
