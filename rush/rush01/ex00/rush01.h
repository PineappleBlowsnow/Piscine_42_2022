/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:46:10 by yijin             #+#    #+#             */
/*   Updated: 2022/07/17 15:46:15 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include <unistd.h>
# include <stdlib.h>

void	write_map(char map[4][4]);
int		count_boxes(char *comb);
int		count_boxes_reverse(char *comb);
int		is_valid_fil(char map[4][4], char *cmb, char **argv, int index);
int		is_valid_col(char map[4][4], char **argv);
int		solve(char map[4][4], char **combination, char **argv, int index);
int		ft_strlen(char *str);
int		ft_isspace(char c);
int		input_is_valid(int argc, char **argv);
void	is_valid_comb_incre(int j, char **dest, int *pi);
char	**creatcombtable(void);
void	free_combination(char **comb);

#endif
