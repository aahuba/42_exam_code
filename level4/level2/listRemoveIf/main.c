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

	node1 = (tList *)malloc(sizeof(tList));
	node2 = (tList *)malloc(sizeof(tList));
	node3 = (tList *)malloc(sizeof(tList));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
}				/* ----------  end of function main  ---------- */
