/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortIntTab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:10:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 15:17:23 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sortIntTab(int *tab, unsigned int size) {
	unsigned int	i = 0;
	int				*ptr;
	int				greaterThanFlag;

//	printf("%d", tab[1]);
	size--;
	while (i < size) {
		greaterThanFlag = 0;
		if (tab[i] > tab[i + 1]) {
			ptr = &tab[i];
			printf("%d", *ptr);
			&tab[i] = &tab[i + 1];
//			printf("%d", *ptr);
			tab[i + 1] = *ptr;
			i = 0;
			greaterThanFlag = 1;
		}
		if (!greaterThanFlag) {
			i++;
		}
	}
	i = 0;
//	while (i <= size) {
//		printf("%d", tab[i]);
//		i++;
//	}
}
