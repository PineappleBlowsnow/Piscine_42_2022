/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vho <vho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:13:24 by yijin             #+#    #+#             */
/*   Updated: 2022/07/27 22:26:32 by vho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <string.h>
# include <errno.h>
# include <libgen.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# define BUFSIZE (1024)

typedef struct s_matrix{
	int	col;
	int	row;
	int	**data;
}	t_matrix;

typedef struct s_map
{
	char	**map;
	int		width;
	int		height;
	char	empty;
	char	obstacle;
	char	full;
}	t_map;

typedef struct s_max_memo
{
	int	start_row;
	int	start_col;
	int	size;
}	t_max_memo;

struct s_nlist
{
	struct s_nlist	*next;
	char			*name;
	char			*defn;
};

typedef struct s_datalist
{
	struct s_datalist	*next;
	struct s_datalist	*pre;
	char				data[BUFSIZE + 1];
}	*t_dl;

/*struct	s_number
{
	char			*key;
	char			*value;
	struct s_number	*next;
};*/

void	ft_print_2d(char **mp, int height, int width);
void	free_map(t_map mp);
void	ft_solve(t_map mp);
t_map	ft_read_map(char *filename);
char	*ft_read_data(int fd);
int		ft_map_is_valid(char *filecontent);
char	*ft_strcat(char *dest, char *src);
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_printable(char *str);
int		ft_str_is_numeric(char *str);
char	**ft_split(char *str, char *charset);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif
