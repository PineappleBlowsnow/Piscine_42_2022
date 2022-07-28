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

int main(int argc, char **argv)
{
	int i;
	t_map mp;
	int fd;

	i = 1;
	while (i < argc)
	{
		fd=open(argv[i],O_RDONLY);
		mp = ft_read_map(ft_read_data(fd));
		close(fd);
		
		if (mp.map)
			ft_solve(mp);
		else
			write(1,"map error\n",10);
		i++;
		
	}
	return (0);
}
