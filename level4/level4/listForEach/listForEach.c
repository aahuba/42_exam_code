/*
 * =================================================================================
 *
 *       Filename:  listForEach.c
 *
 *    Description:  Write a function that takes a list and a function pointer, and
 *    				applies this function to each element of the list.
 *
 *    				It must be declared as follows:
 *
 *    				void    listForEach(lList *beginList, void (*f)(void *));
 *
 *    				The function pointed to by f will be used as follows:
 *
 *    				(*f)(list_ptr->data);
 *
 *    				You must use the following structure, and turn it in as a file
 *    				called list.h:
 *
 *    				typedef struct    kList {
 *        				struct kList  *next;
 *            			void          *data;
 *            		}                 lList;
 *
 *        Version:  1.0
 *        Created:  05/27/2017 10:14:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =================================================================================
 */
#include "list.h"
#include <stdio.h>

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  listForEach
 *  Description:  Takes a list and a function pointer, and applies this function
 *  			  to each element of the list.
 * =================================================================================
 */
void	listForEach(lList *beginList, void (*f)(void *)) {
	lList *node;

	node = beginList;
//	while (node) {
//		printf("%d", (int)node->data);
//		node = node->next;
//	}
//	node = beginList;
	while (node) {
		f(node->data);
		node = node->next;
	}
//	node = beginList;
//	while (node) {
//		printf("%d", (int)node->data);
//		node = node->next;	
//	}
}		/* -----  end of function listForEach  ----- */
