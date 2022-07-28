/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:35:56 by yijin             #+#    #+#             */
/*   Updated: 2022/07/27 23:35:58 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft.h"

char	*ft_read_data(int fd)
{
	char	*result;
	t_dl	dl;
	t_dl	curr;
	t_dl	pre;
	int		read_size;
	int		totalsize;

	dl = malloc(sizeof(*dl));
	curr = dl;
	pre = dl;
	read_size = read(fd, curr->data, BUFSIZE);
	curr->data[read_size] = '\0';
	curr->pre = 0;
	totalsize = read_size;
	while (read_size == BUFSIZE)
	{
		curr = malloc(sizeof(*curr));
		read_size = read(fd, curr->data, BUFSIZE);
		curr->data[read_size] = '\0';
		curr->pre = pre;
		pre->next = curr;
		pre = curr;
		totalsize += read_size;
	}
	curr->next = 0;
	result = malloc(sizeof(*result) * totalsize);
	result[0] = 0;
	pre = 0;
	curr = dl;
	while (curr)
	{
		if (pre)
			free(pre);
		ft_strcat(result, curr->data);
		pre = curr;
		curr = curr->next;
	}
	free(pre);
	return (result);
}
