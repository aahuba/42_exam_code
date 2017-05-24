/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:56:50 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/24 11:22:04 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

lList	*sortList(lList *lst, int (*cmp)(int, int)) {
	lList			*node;
	lList			*newHeadNode;
	unsigned int	nodeNumber;

	node = lst;
	newHeadNode = node;
	nodeNumber = 0;
	while (node->next) {
		if (!(cmp(node->data, node->next->data))) {
			if(!nodeNumber) {
				newHeadNode = node->next
			}
		}
	}
	return (newHeadNode);
}
