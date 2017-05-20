/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for sortIntTab
 *
 *        Version:  1.0
 *        Created:  05/19/2017 16:47:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */
#include <stdio.h>

void	sortIntTab(int *tab, unsigned int size);

/* 
 * ===  FUNCTION  ================================================================
 *         Name:  main
 *  Description:  
 * ===============================================================================
 */
int	main (void)
{
	int	tab[5] = { 2, 1, 3, 5, 3 };
	unsigned int	size = 5;
	
	sortIntTab(tab, size);
	printf("%d", tab[2]);
}				/* ----------  end of function main  ---------- */
