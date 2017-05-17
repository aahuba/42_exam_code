/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for ft_list_foreach.
 *
 *        Version:  1.0
 *        Created:  05/14/2017 12:13:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  set_to_1
 *  Description:  Sets the data to one
 * =====================================================================================
 */
void	setTo1 (void *data)	{
	int	*ptr;
	int *ptr2;

	ptr = (int *)data;
	*ptr = '1';
	ptr2 = (int *)data;
	printf("%d", *ptr2);
}		/* -----  end of function set_to_1  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Driver for ft_list_foreach.
 * =====================================================================================
 */
int	main (void)	{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));

	node1->data = (void *)malloc(1);
	node2->data = (void *)malloc(1);
	node3->data = (void *)malloc(1);

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_list_foreach(node1, setTo1);
}		/* ----------  end of function main  ---------- */
