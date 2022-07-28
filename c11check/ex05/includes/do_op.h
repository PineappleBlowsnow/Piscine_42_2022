/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:42:16 by yijin             #+#    #+#             */
/*   Updated: 2022/07/28 11:42:18 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include<unistd.h>

void	f_add(int n1, int n2);
void	f_div(int n1, int n2);
void	f_mod(int n1, int n2);
void	f_sub(int n1, int n2);
void	f_mul(int n1, int n2);
int		ft_strlen(char *str);
void	ft_op(int n1, char op, int n2);
int		ft_atoi(char *nbr);
void	ft_putnbr(int nb);
#endif
