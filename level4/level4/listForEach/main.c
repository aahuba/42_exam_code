/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for listForEach
 *
 *        Version:  1.0
 *        Created:  05/27/2017 10:32:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
void changeTo5(void *pdata);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  
 * =================================================================================
 */
int	main(void) {
	lList	*node1;
	lList	*node2;
	lList	*node3;

	node1 = (lList *)malloc(sizeof(*node1));
	node2 = (lList *)malloc(sizeof(*node2));
	node3 = (lList *)malloc(sizeof(*node3));

	node1->data = malloc(sizeof(int));
	node2->data = malloc(sizeof(int));
	node3->data = malloc(sizeof(int));

	node1->data = (void *)1;
	node2->data = (void *)2;
	node3->data = (void *)3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	listForEach(node1, changeTo5);
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  changeTo5
 *  Description:  Random function to test listForEach
 * =====================================================================================
 */
void	changeTo5(void *pdata)
{
//	int *dataPtr;
	printf("%d", int(*pdata));
//	dataPtr = (int *)pdata;
//	printf("%d", *dataPtr);
//	*dataPtr = 5;
}		/* -----  end of function changeTo5  ----- */
