#ifndef FT_LIST_H
# define FT_LIST_H
#include<stdlib.h>
#include<stdio.h>
typedef struct s_list
{
    int value; 
    struct s_list *next;

} t_list;
t_list	*ft_create_elem(int data);
t_list *sort_list(t_list* lst, int (*cmp)(int, int));
#endif