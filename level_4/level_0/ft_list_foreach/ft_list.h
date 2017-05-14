/*
 * =====================================================================================
 *
 *       Filename:  ft_list.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/14/2017 12:09:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void				ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif
