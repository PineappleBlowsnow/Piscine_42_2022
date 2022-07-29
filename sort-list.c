#include"ft_list.h"

int ft_size(t_list* lst)
{
    int i;

    i=0;
    while(lst)
    {
        lst=lst->next;
        i++;
    }
    return (i);
}


t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list * temp;
    int i;
    int size;
    int swap;
    
    size=ft_size(lst);
    while(size>1)
    {
        i =0;
        temp=lst;
        while(i<size-1)
        {
            if((*cmp)(temp->value,temp->next->value)>0)
            {
                swap=temp->value;
                temp->value=temp->next->value;
                temp->next->value=swap;
            }
            temp=temp->next;
            i++;
        }
        size--;
    }
    return (lst);
}