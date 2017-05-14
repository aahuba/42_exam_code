#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*node1 = (t_list*)malloc(sizeof(t_list));
	t_list	*node2 = (t_list*)malloc(sizeof(t_list));
	t_list	*node3 = (t_list*)malloc(sizeof(t_list));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%d", ft_list_size(node1));
	return (0);
}
