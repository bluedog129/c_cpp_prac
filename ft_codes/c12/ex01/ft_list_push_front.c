#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *e;

    e = ft_create_elem(data);
    if (*begin_list)
        e->next = *begin_list;
    *begin_list = e;
}

#include <stdio.h>
int main()
{
    int* pt;
    int a = 1;
    pt = &a;
}