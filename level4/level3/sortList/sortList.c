/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:56:50 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 17:27:50 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

tList	*sortList(tList *lst, int (*cmp)(int, int)) {
	tList	*listStart;
	tList	*node;
	tList	*beforeNode;

	listStart = lst;
	node = lst;
	beforeNode = lst;
	while (node->next) {
		if (!(cmp(node->data, node->next->data)) {
			beforeNode->next = node->next;
		}
	}
