/*
 * =====================================================================================
 *
 *       Filename:  ft_listforeach.c
 *
 *    Description:  Write a function that takes a list and a function pointer,
 *    				and applies this function to each element of the list.
 *
 *    				It must be declared as follows:
 *
 *   				void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
 *
 *    				The function pointed to by f will be used as follows:
 *
 *    				(*f)(list_ptr->data);
 *
 *    				You must use the following structure, and turn it in as a file
 *    				called ft_list.h:
 *
 *   				typedef struct    s_list
 *    				{
 *        				struct s_list *next;
 *            			void          *data;
 *            		}                 t_list;
 *
 *        Version:  1.0
 *        Created:  05/14/2017 11:59:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */
#include "ft_list.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ft_list_for_each
 *  Description:  Takes a list and a function pointer, and applies this function
 *  			  to each element of the list.
 * =====================================================================================
 */
void	ft_list_for_each(t_list *begin_list, void (*f)(void *))
{
	t_list	*list;

	list = begin_list;
	while (list)
		(*f)(list->data);
}		/* -----  end of function ft_list_for_each  ----- */
