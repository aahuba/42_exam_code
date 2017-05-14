/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 10:09:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/02 14:37:28 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  str_capitalizer
 *  Description:  Capitalizes the first character of each word (if it's a 
 *				  letter), puts the rest in lowercase.  A "word" is defined as a
 *				  part of a string delimited either by spaces\tabs or by the
 *				  start\end of the string.  If a word only has one letter it
 *				  must be capitalized.
 * =============================================================================
 */

static char	*str_capitalizer (char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] < 33))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] > 32))
			str[i] += 32;
		i++;
	}
	return (str);
}		/* -----  end of function str_capitalizer  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ft_putstr
 *  Description:  Writes a string to the standard ouput followed by a newline.
 * =============================================================================
 */
static void	ft_putstr (char *str)
{
	while(*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}		/* -----  end of function ft_putstr  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  Write a program that takes one or several strings and, for
 *  			  each argument, capitalizes the first character of each word
 *  			  (if it's a letter), puts the rest in lowercase, and displays
 *  			  the result on the standard output, followed by a \n. A "word"
 *  			  is defined as a part of a string delimited either by
 *  			  spaces/tabs, or by the start/end of the string. If a word only
 *  			  has one letter, it must be capitalized. If there are no
 *  			  arguments, the progam must display \n.
 * =============================================================================
 */
int			main (int argc, char **argv)
{
	unsigned int	i;
	char			*tmp;
	int				flag;

	i = 1;
	flag = 0;
	while (i < argc)
	{
		tmp = str_capitalizer(argv[i++]);
		ft_putstr(tmp);
		flag = 1;
	}
	if (!flag)
		write(1, "\n", 1);
}				/* ----------  end of function main  ---------- */
