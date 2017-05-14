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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  set_to_1
 *  Description:  Sets the data to one
 * =====================================================================================
 */
void	set_to_1 (void *data)
{
	*data = 1;
	printf("%d", *data);
}		/* -----  end of function set_to_1  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Driver for ft_list_foreach.
 * =====================================================================================
 */
int	main (void)
{
	t_list	*node_1;
	t_list	*node_2;
	t_list	*node_3;

	node_1 = (t_list *)malloc(sizeof(t_list));
	node_2 = (t_list *)malloc(sizeof(t_list));
	node_3 = (t_list *)malloc(sizeof(t_list));

	node_1->next = node_2;
	node_2->next = node_3;
	node_3->next = NULL;

	node_1->data = '0';
	node_2->data = '0';
	node_3->
}		/* ----------  end of function main  ---------- */
