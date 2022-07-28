/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:47:48 by gansard           #+#    #+#             */
/*   Updated: 2022/07/17 22:29:04 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_print_map(int **tab);
int		ft_check_input_combis_col(int *clean_param);
int		ft_check_input_combis_row(int *clean_param);
int		count_boxes(int *comb);
int		count_boxes_reverse(int *comb);
void	ft_free_map(int **tab, int *clean_param);
int		**ft_create_map(void);
int		ft_solver(int **map, int cell, int *clean_param);
int		no_duplicate(int **map, int cell, int cell_value);
int		ft_check_param(char *str);
int		*ft_clean_param(char *str);

void	ft_print_error(void)
{
	ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	int	**map;
	int	*clean_param;

	if (argc != 2 || !ft_check_param(argv[1]))
	{
		ft_print_error();
		return (-1);
	}
	clean_param = ft_clean_param(argv[1]);
	map = ft_create_map();
	if (!map)
		return (-1);
	if (!ft_check_input_combis_col(clean_param)
		|| !ft_check_input_combis_row(clean_param))
		ft_print_error();
	else if (ft_solver(map, 0, clean_param))
		ft_print_map(map);
	else
		ft_print_error();
	ft_free_map(map, clean_param);
	return (0);
}
