/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:43:00 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 17:43:01 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	if (!begin_list)
		return ;
	while (begin_list)
	{
		temp = begin_list->next;
		(*free_fct)(begin_list->data);
		free(begin_list);
		begin_list = temp;
	}
}
