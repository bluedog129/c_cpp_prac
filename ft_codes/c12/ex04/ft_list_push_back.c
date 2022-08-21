#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (begin_list);
}