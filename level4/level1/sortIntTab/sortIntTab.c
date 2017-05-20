/*
 * =================================================================================
 *
 *       Filename:  sortIntTab.c
 *
 *    Description:  Assignment name  : sortIntTab
 *    				Expected files   : sortTntTab.c
 *    				Allowed functions:
 *    ------------------------------------------------------------------------------
 *
 *   			 	Write the following function:
 *
 *    				void sortIntTab(int *tab, unsigned int size);
 *
 *    				It must sort (in-place) the 'tab' int array, that contains
 *    				exactly 'size' members, in ascending order.
 *
 *    				Doubles must be preserved.
 *
 *    				Input is always coherent.
 *
 *        Version:  1.0
 *        Created:  05/19/2017 16:34:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =================================================================================
 */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sortIntTab
 *  Description:  Sorts an array of ints. 
 * =====================================================================================
 */
void	sortIntTab (int *tab, unsigned int size)
{
	unsigned int	i;
	int		*store;

	i = 0;
	while (i < size) {
		if (tab[i] > tab[i + 1]) {
			store = &tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = *store;
			i = 0;
		}
		i++;
	}
}		/* -----  end of function sortIntTab  ----- */
