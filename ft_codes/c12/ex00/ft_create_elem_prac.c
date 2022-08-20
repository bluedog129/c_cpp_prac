#include "ft_list.h"
#include <stdlib.h>

t_list  *ft_create_elem(void* data)
{
    t_list  *a;

    a = malloc(sizeof(t_list));
    if (!a)
        return (NULL);
    a->next = NULL;
    a->data = data;
    return (a);
}

#include <stdio.h>
int main()
{
    int *pt;
    int c = 10;

    pt = &c;

    printf("%d", *(int*)(ft_create_elem(pt)->data));
}