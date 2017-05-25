/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for iToA
 *
 *        Version:  1.0
 *        Created:  05/25/2017 12:05:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include	<stdio.h>

char	*iToA(int nbr);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  Driver for iToA
 * =================================================================================
 */
int	main (void)
{
	int	nbr = 721;
	printf("%s", iToA(nbr));
}				/* ----------  end of function main  ---------- */
