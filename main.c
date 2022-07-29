#include"ft_list.h"
#include<stdio.h>

t_list	*ft_list_push_strs(int size, int *tab)
{
	t_list	*begin_list;
	t_list	*curr_list;
	int		i;

	if (size == 0)
		return (NULL);
	begin_list = ft_create_elem(tab[0]);
	curr_list = begin_list;
	i = 1;
	while (i < size)
	{
		curr_list->next = ft_create_elem(tab[i]);
		curr_list = curr_list->next;
		i++;
	}
	return (begin_list);
}
int cmp(int a, int b)
{
    return (a-b);
}
t_list *sort_list(t_list* lst, int (*cmp)(int, int));

int main()
{
    int tab[]={4,3,2,1};
    t_list *test;
    t_list *result;
    test=ft_list_push_strs(4,tab);
    result=sort_list(test,&cmp);
    while(result)
    {
        printf("%d ",result->value);
        result=result->next;
    }
}