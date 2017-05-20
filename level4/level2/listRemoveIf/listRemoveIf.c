/*
 * =================================================================================
 *
 *       Filename:  listRemoveIf.c
 *
 *    Description:  Assignment name  : listRemoveIf
 *    				Expected files   : ft_list_remove_if.c
 *    				Allowed functions: free
 *    ------------------------------------------------------------------------------
 *
 *    				Write a function called ft_list_remove_if that removes from the
 *    				passed list any element the data of which is "equal" to the
 *    				reference data.
 *
 *    				It will be declared as follows :
 *
 *    				void listRemoveIf(t_list **beginList, void *dataRef, int
 *    				(*cmp)());
 *
 *    				cmp takes two void* and returns 0 when both parameters are
 *    				equal.
 *
 *    				You have to use the list.h file, which will contain:
 *
 *    				$>cat list.h
 *    				typedef struct      sList {
 *        				struct s_list   *next;
 *            			void            *data;
 *            		}                   tList;
 *
 *        Version:  1.0
 *        Created:  05/19/2017 17:15:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * ===============================================================================
 */
#include "list.h"
/* 
 * ===  FUNCTION  ================================================================
 *         Name:  listRemoveIf
 *  Description:  Removes from the passed list any element the data of which is
 *  			  "equal" to the reference data
 * ===============================================================================
 */
void	listRemoveIf (tList **beginList, void *dataRef, int (*cmp)()) {
	tList	*node;

	node = *beginList;
	while (node) {
		if (!(cmp(dataRef, node->data)))
			free (node->data);
		node = node->next;
	}
}		/* -----  end of function listRemoveIf  ----- */
