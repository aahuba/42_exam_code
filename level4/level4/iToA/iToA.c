/*
 * =================================================================================
 *
 *       Filename:  iToA.c
 *
 *    Description:  Write a function that takes an int and converts it to a 
 *    				null-terminated string.
 *    
 *    				The function returns the result in a char array that you must
 *    				allocate.
 *
 *    				Your function must be delcared as follows:
 *
 *    				char *iToA(int nbr);
 *
 *        Version:  1.0
 *        Created:  05/25/2017 11:57:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
char *iToA(int nbr);
unsigned int getNbrLength(int nbr);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  iToA
 *  Description:  Takes an int and converts it to a null-terminated string.
 * =================================================================================
 */
char	*iToA(int nbr) {
	char			*str;
	unsigned int	nbrLength;
	unsigned int	storeLength;
	
	nbrLength = getNbrLength(nbr);
	str = (char *)malloc(sizeof(*str) * (nbrLength + 1));
	storeLength = nbrLength;
	while (nbrLength--) {
		str[nbrLength] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[++storeLength] = '\0';
	return (str);
}		/* -----  end of function iToA  ----- */


/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getNbrLength
 *  Description:  Returns the length of the nbr
 * =================================================================================
 */
unsigned int	getNbrLength(int nbr) {
	unsigned int	nbrLength;

	nbrLength = 0;
	while (nbr) {
		nbr /= 10;
		nbrLength++;
	}
	return (nbrLength);
}		/* -----  end of function getNbrLength  ----- */
