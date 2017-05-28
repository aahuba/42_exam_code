/*
 * =================================================================================
 *
 *       Filename:  roString.c
 *
 *    Description:  Assignment name  : roString
 *    				Expected files   : roString.c
 *    				Allowed functions: write, malloc, free
 *   				---------------------------------------------------------------
 *
 *   				 Write a program that takes a string and displays this string
 *    				after rotating it one word to the left.
 *
 *    				Thus, the first word becomes the last, and others stay in the
 *    				same order.
 *
 *    				A "word" is defined as a part of a string delimited either by
 *    				spaces/tabs, or by the start/end of the string.
 *
 *    				Words will be separated by only one space in the output.
 *
 *    				If there's less than one argument, the program displays \n.
 *
 *    				Example:
 *
 *    				$>./rostring "abc   " | cat -e
 *    				abc$
 *    				$>
 *    				$>./rostring "Que la      lumiere soit et la lumiere fut"
 *    				la lumiere soit et la lumiere fut Que
 *    				$>
 *    				$>./rostring "     AkjhZ zLKIJz , 23y"
 *    				zLKIJz , 23y AkjhZ
 *    				$>
 *    				$>./rostring | cat -e
 *    				$
 *
 *        Version:  1.0
 *        Created:  05/28/2017 09:09:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =================================================================================
 */

#include	<stdlib.h>
/******************************************************
**               funtion prototypes                 ***
*******************************************************/
void roString(char *stringPtr);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  A program that takes a string and displays this string after
 * 				  rotating it one word to the left.
 *
 *  			  Thus, the first word becomes the last, and others stay in the
 *  			  same order.
 *
 *  			  A "word" is defined as a part of a string delimited either by
 *  			  spaces/tabs, or by the start/end of the string.
 *
 *  			  Words will be separated by only one space in the output.
 *
 *  			  If there's less than one argument, the program displays \n.
 * =================================================================================
 */
int	main(int argc, char **argv) {
	size_t	i = 1;
	if (argc > 1) {
		while ((int)i++ < argc) {
			roString(argv[i]);
		}
	}
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  roString
 *  Description:  
 * =================================================================================
 */
void roString(char *stringPtr) {
	size_t	i = 0;
	char	*newStringPtr;
	size_t	stringLength = 0;
	size_t	firstWordLength = 0;


	while (stringPtr[i]) {
		if (stringPtr[i] > 32 || (stringPtr[i] < 33 && stringPtr[i + 1] > 32)) {
			stringLength++;
		}
		i++;
	}
	if (stringPtr[--i] < 33) {
		stringLength--;
	}
	newStringPtr = (char *)malloc(sizeof(*newStringPtr) * (stringLength + 1));
	i = 0;
	while (
	free(newStringPtr);
}		/* -----  end of function roString  ----- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getLengthForNewString
 *  Description:  Returns a malloced region of memory for newStringPtr.
 * =================================================================================
 */
char	*getLengthForNewString ()
{
return <+return_value+>;
}		/* -----  end of function getLengthForNewString  ----- */
