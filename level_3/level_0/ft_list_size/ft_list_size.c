#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*node = begin_list;
	int	i = 0;

	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
