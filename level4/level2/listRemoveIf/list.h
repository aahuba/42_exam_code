/*
 * =====================================================================================
 *
 *       Filename:  ft_list.h
 *
 *    Description:  Header file for listRemoveIf
 *
 *        Version:  1.0
 *        Created:  05/19/2017 17:24:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>

typedef struct		sList {
	struct sList	*next;
	void			*data;
}					tList;

void	listRemoveIf(tList **beginList, void *dataRef, int (*cmp)());

#endif
