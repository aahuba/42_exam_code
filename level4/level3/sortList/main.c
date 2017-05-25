#include "list.h"
#include <stdio.h>
#include <stdlib.h>

lList	*sortList(lList	*lst, int (*cmp)(int, int));

int	cmp(int a, int b) {
	return (a <= b);
}

int	main(void) {
	lList	*node1;
	lList	*node2;
	lList	*node3;
	lList	*node4;

	node1 = (lList *)malloc(sizeof(*node1));
	node2 = (lList *)malloc(sizeof(*node2));
	node3 = (lList *)malloc(sizeof(*node3));
	node4 = (lList *)malloc(sizeof(*node4));

	node1->data = 1;
	node2->data = 2;
	node3->data = 4;
	node4->data = 1;
	
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	sortList(node1, cmp);
}
