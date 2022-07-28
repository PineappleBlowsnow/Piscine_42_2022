/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:12:00 by yijin             #+#    #+#             */
/*   Updated: 2022/07/27 12:12:01 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strslen(char **tab)
{
	char	**end;

	end = tab;
	while (*end)
		end++;
	return (end - tab);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[j]) > 0)
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
