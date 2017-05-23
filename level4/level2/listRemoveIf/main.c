/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for listRemoveIf
 *
 *        Version:  1.0
 *        Created:  05/19/2017 17:44:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include "list.h"
#include <stdio.h>
#include <string.h>

int	cmp(void *ptr1, void *ptr2);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  listRemoveIf main
 * =====================================================================================
 */
int	main (void)
{
	tList	*node1;
	tList	*node2;
	tList	*node3;
	tList	*node;
//	char	*ptr;
	int		count = 0;

	node1 = (tList *)malloc(sizeof(tList));
	node2 = (tList *)malloc(sizeof(tList));
	node3 = (tList *)malloc(sizeof(tList));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

//	ptr = (char *)malloc(sizeof(char) * 1 + 1);
	node1->data = (char *)malloc(sizeof(char) * 1 + 1);
	node2->data = (char *)malloc(sizeof(char) * 1 + 1);
	node3->data = (char *)malloc(sizeof(char) * 1 + 1);

//	*ptr = 'a';

//	printf("%c", *ptr);

	node1->data = (void *)'a';
	node2->data = (void *)'a';
	node3->data = (void *)'a';

//	printf("%c", (char)node1->data);

	listRemoveIf(&node1, (void *)'a', &cmp);
	node = node1;
	while (node) {
		count++;
		node = node->next;
	}
	printf("%d", count);


//	printf("%c", (char)node1->data);
}				/* ----------  end of function main  ---------- */

int	cmp(void *ptr1, void *ptr2)
{
	char	*charPtr1 = (char *)&ptr1;
	char	*charPtr2 = (char *)&ptr2;

//	printf("%c", *charPtr1);
//	printf("%c", *charPtr2);
	if (*charPtr1 == *charPtr2) {
		return (0);
	}
	return (1);
}
