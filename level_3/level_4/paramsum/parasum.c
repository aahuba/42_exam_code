/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 09:41:46 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/21 10:03:52 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  Displays the number of arguments passed to it, followed by a 
 *  			  newline. If there are no arguments, just display a 0 followed
 *  			  by a newline.
 * =============================================================================
 */
int main (int argc, char **argv)
{
	int	result;

	if (argv[0])
	{
		result = argc - 1 + '0';
		write(1, &result, 1);
		write(1, "\n", 1);
	}
}				/* ----------  end of function main  ---------- */
