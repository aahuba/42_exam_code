/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:56:50 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/25 11:51:53 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

lList	*sortList(lList *lst, int (*cmp)(int, int)) {
	lList			*node;
	lList			*newHeadNode;
	lList			*nextNode;
	lList			*previousNode;
	unsigned int	nodeNumber;
	unsigned int	changedOrderFlag;

	node = lst;
	newHeadNode = node;
	nodeNumber = 0;
	
	node = lst;
	while (node->next) {
		nextNode = node->next;
		changedOrderFlag = 0;
		if (!(cmp(node->data, node->next->data))) {
			if(!nodeNumber) {
				newHeadNode = nextNode;
			}
			if (previousNode) {
				previousNode->next = nextNode;
			}
			node->next = nextNode->next;
			nextNode->next = node;
			node = newHeadNode;
			changedOrderFlag = 1;
			nodeNumber = 0;
		}
		if (!changedOrderFlag) {
			previousNode = node;
			node = nextNode;
			nodeNumber++;
		}
	}
	node = newHeadNode;
	return (newHeadNode);
}
