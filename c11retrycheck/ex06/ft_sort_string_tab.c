/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:00:55 by yijin             #+#    #+#             */
/*   Updated: 2022/07/27 12:00:56 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strslen(char **tab)
{
	char	**end;

	end = tab;
	while (*end)
		end++;
	return (end - tab);
}

void	ft_sort_string_tab(char **tab)
{
	char	*p;
	int		size;
	int		i;
	int		j;

	size = ft_strslen(tab);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				p = tab[i];
				tab[i] = tab[j];
				tab[j] = p;
			}
			j++;
		}
		i++;
	}
}
