/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:07 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/12 17:46:09 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_search_and_replace(char *str, char i, char j)
{
	int	k;

	k = -1;
	while (str[++k])
		if (str[k] == i)
			str[k] = j;
	return (str);
}
