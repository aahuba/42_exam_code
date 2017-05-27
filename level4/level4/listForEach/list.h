/*
 * =====================================================================================
 *
 *       Filename:  list.h
 *
 *    Description:  Header for listForEach
 *
 *        Version:  1.0
 *        Created:  05/27/2017 10:20:35
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

typedef struct		kList {
	struct kList	*next;
	void			*data;
}					lList;

void	listForEach(lList *beginList, void(*f)(void *));

#endif
