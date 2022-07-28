/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:34:10 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 17:34:13 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*curr_list;
	int		i;

	if (size == 0)
		return (NULL);
	begin_list = ft_create_elem(strs[0]);
	curr_list = begin_list;
	i = 1;
	while (i < size)
	{
		curr_list->next = ft_create_elem(strs[i]);
		curr_list = curr_list->next;
		i++;
	}
	return (begin_list);
}
