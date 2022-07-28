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
int	ft_strlen(char *tab)
{
	char	*end;

	end = tab;
	while (*end)
		end++;
	return (end - tab);
}

int	ft_strslen(char **tab)
{
	char	**end;

	end = tab;
	while (*end)
		end++;
	return (end - tab);
}

int	check_strs_sorted(char **tab)
{
	while (*tab)
	{
		if (ft_strlen(*tab) > ft_strlen(*(tab + 1)))
			return (0);
		tab++;
	}
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*p;
	int		size;
	int		i;

	size = ft_strslen(tab);
	while (!check_strs_sorted(tab))
	{
		i = 0;
		while (i < size - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				p = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = p;
			}
			i++;
		}
	}
}
