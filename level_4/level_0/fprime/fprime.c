/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 12:01:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/14 11:51:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  is_factor
 *  Description:  Determines if factor is indeed a factor of nbr.
 * =============================================================================
 */
int	is_factor (int factor, int nbr)
{
	if (nbr % factor)
		return (0);
	return (1);
}		/* -----  end of function is_factor  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  is_prime
 *  Description:  Determines if the factor is a prime number.
 * =============================================================================
 */
int	is_prime (int factor)
{
	int	prime;

	prime = 2;
	while (prime < (factor / 2))
	{
		if (!(factor % prime))
			return (0);
		prime++;
	}
	return (1);
}		/* -----  end of function is_prime  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  fprime
 *  Description:  Takes a positive int and displays its prime factors on the
 *  			  standard output.
 * =============================================================================
 */
void	fprime (int nbr)
{
	int	factor;

	factor = 2;
	if (nbr == 1)
		printf("%d", 1);
	while (nbr != 1)
	{
		if  (is_prime(factor))
			if (is_factor(factor, nbr))
			{
				nbr = nbr / factor;
				printf("%d", factor);
				if (nbr != 1)
					printf("%c", '*');
				factor = 2;
			}
			else
				factor++;
		else
			factor++;
	}
}		/* -----  end of function fprime  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  A program that takes a positive int and displays its prime
 *  			  factors on the standard output, followed by a newline.
 *
 *  			  Factors must be displayed in ascending order and separated by
 *  			  '*', so that the expression in the output gives the right
 *  			  result.
 *
 *  			  If the number of parameters is not 1, simply display a
 *  			  newline.
 *
 *  			  The input, when there's one, will be valid.
 * =============================================================================
 */
int	main (int argc, char **argv)
{
	int	nbr;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		fprime(nbr);
	}
	printf("%s", "\n");
}				/* ----------  end of function main  ---------- */
