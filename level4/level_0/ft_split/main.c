/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for ft_split
 *
 *        Version:  1.0
 *        Created:  05/17/2017 10:18:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */


#include	<stdio.h>

char	**ft_split(char *str);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  Driver for ft_split
 * =================================================================================
 */
int	main (void)
{
	char **test;

	test = ft_split("This is a test");
	printf("%s", test[3]);
}				/* ----------  end of function main  ---------- */
