/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:47:48 by gansard           #+#    #+#             */
/*   Updated: 2022/07/17 19:27:56 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int    ft_check_param(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))
            return (0);
        if (i % 2 == 1 && str[i] != ' ')
            return (0);
        if (str[i + 1] == '\0' && !(str[i] >= '1' && str[i] <= '4'))
            return (0);
        i++;
    }
    if (i != 31)
        return (0);
    return (1);
}

int    **ft_create_map(void)
{
    int    **tab;
    int    i;
    int    j;

    i = 0;
    j = 0;
    tab = malloc(sizeof(int*) * 4);
    if (!tab)
        return (tab);
    while (i < 4)
    {
        tab[i] = malloc(sizeof(int) * 4);
        if (!tab[i])
            return (tab);
        j = 0;
        while (j < 4)
        {
            tab[i][j] = 0;
            j++;
        }
        i++;
    }
    return (tab);
}

void	ft_print_map(int **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar('0' + tab[x][y]);
			if (y != 3)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			y++;
		}
		x++;
	}
}

int	*ft_clean_param(char *str)
{
	int	*clean_param;
	int	i;
	int	j;

	clean_param = malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	while(str[i])
	{
		if (i % 2 == 0)
		{
			clean_param[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (clean_param);
}

int	ft_check_input_combis_col(int *clean_param)
{
	int	column;

	column = 0;
	while (column <= 3)
	{
		if (clean_param[column] + clean_param[column + 4] > 5)
			return (0);
		if (clean_param[column] == 4 && clean_param[column + 4] != 1)
			return (0);
		column++;
	}
	column = 7;
	while (column >= 4)
	{
		if (clean_param[column] == 4 && clean_param[column - 4] != 1)
			return (0);
		column--;
	}
	return (1);
}

int	ft_check_input_combis_row(int *clean_param)
{
	int row;

	row = 8;
	while (row <= 11)
	{
		if (clean_param[row] + clean_param[row + 4] > 5)
			return (0);
		if (clean_param[row] == 4 && clean_param[row + 4] != 1)
			return (0);
		row++;
	}
	row = 15;
	while (row >= 12)
	{
		if (clean_param[row] == 4 && clean_param[row - 4] != 1)
			return (0);
		row--;
	}
	return (1);
}

int	count_boxes(int *comb)
{
	int	i;
	int	nb_boxes;
	int	height;

	i = 0;
	nb_boxes = 0;
	height = 0;
	while (i < 4)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i++;
	}
	return (nb_boxes);
}

int	count_boxes_reverse(int *comb)
{
	int	i;
	int	nb_boxes;
	int	height;

	i = 3;
	nb_boxes = 0;
	height = 0;
	while (i >= 0)
	{
		if (comb[i] > height)
		{
			height = comb[i];
			nb_boxes++;
		}
		i--;
	}
	return (nb_boxes);
}

int	no_duplicate(int **map, int cell, int cell_value)
{
	int	i;

	i = cell-4;
	while (i >= 0)
	{
		if (map[i / 4][i % 4] == cell_value)
			return (0);
		i = i - 4;
	}
	if(i%4)
	{
		i = cell-1;
	while (i % 4 != 0)
	{ 
		if (map[i / 4][i % 4] == cell_value)
			return (0);
		i--;
	}
	
	if (i % 4 == 0 && map[i / 4][i % 4] == cell_value)
		return (0);
	}
	return (1);
}

int	map_is_ok(int **map, int *clean_param)
{
	int	x;
	int	y;
	int *column;

	x = 0;
	y = 0;
	column = malloc(sizeof(int) * 4);
	while (x < 4)
	{
		if (count_boxes(map[x]) != clean_param[8 + x] || count_boxes_reverse(map[x]) != clean_param[12 + x])
		{
			return (0);
		}
		x++;
	}
    x = 0;
    while(x < 4)
    {
        y = 0; 
        while(y < 4)
        {
            column[y] = map[y][x];
            y++;
        }
        if(count_boxes(column) != clean_param[x] || count_boxes_reverse(column) != clean_param[x+4])
            return (0);
        x++;
    }
    return (1); 

}

int	ft_solver(int **map, int cell, int *clean_param)
{
	int	cell_value;
	if(0 && cell>=11 && map[0][0]==1 && map[0][1]==2
		&& map[1][0]==2&&map[1][1]==3&&map[1][2]==4 &&map[1][3]==1
		&& map[2][0]==3&&map[2][1]==4&&map[2][2]==1 &&map[2][3]==2){
		printf("~~~~~~cell=%d~~~~~~~~~~~\n",cell);
		printf("%d %d %d %d\n",map[0][0],map[0][1],map[0][2],map[0][3]);
		printf("%d %d %d %d\n",map[1][0],map[1][1],map[1][2],map[1][3]);
		printf("%d %d %d %d\n",map[2][0],map[2][1],map[2][2],map[2][3]);
		printf("%d %d %d %d\n",map[3][0],map[3][1],map[3][2],map[3][3]);
		printf("~~~~~~~~~~~~~~~~~\n");
	}
	if (cell == 16 && map_is_ok(map, clean_param)){
		printf("herere\n");
		return (1);}
	if (cell < 16)
	{
		cell_value = 1;
		while (cell_value <= 4)
		{
			if (no_duplicate(map, cell, cell_value))
			{
				map[cell / 4][cell % 4] = cell_value;
				//printf("%d \n",cell);
				//ft_print_map(map);
				if (ft_solver(map, cell + 1, clean_param))
				{
					
					return (1);
				}
			}
			cell_value++;
		}
	}
	return (0);
}

void	ft_free_map(int **tab)
{
	int	i;

	i = 3;
	while(i >=0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

void	ft_print_error(void)
{
	ft_putstr("Error\n");
}

int    main(int argc, char **argv)
{
    int    **map;
    int    *clean_param;

    if (argc != 2 || !ft_check_param(argv[1]))
    {
		ft_print_error();
        return (-1);
    }
    clean_param = ft_clean_param(argv[1]);
    map = ft_create_map();
    if (!map)
	{
        return (-1);
	}
    if (!ft_check_input_combis_col(clean_param) || !ft_check_input_combis_row(clean_param))
		ft_print_error();
    if (ft_solver(map, 0, clean_param))
        ft_print_map(map);
    else
	{
		printf("gfjhhh\n");
        ft_print_error();
	}
    ft_free_map(map);
    return (0);
}
