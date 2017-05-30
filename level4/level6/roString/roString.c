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
#include <unistd.h>

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
void roString(char *stringPtr);
char *getLengthForNewString (char *stringPtr);
size_t getFirstWordLength(char *stringPtr);
void writeNewStringPtr(char *newStringPtr);
char *intializeNewStringPtr(char *newStringPtr, char *stringPtr, size_t
		firstWordLength);

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
	size_t	i = 0;
	if (argc > 1) {
		while ((int)i++ < argc - 1) {
			roString(argv[i]);
		}
	}
	else {
		write(1, "\n", 1);
	}
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  roString
 *  Description:  Takes a string and displays this string after rotating it one word
 *  			  to the left.
 *
 *  			  Thus, the first word becomes the last, and others stay in the same
 *  			  order.
 *
 *  			  A "word" is defined as a part of a string delimited either by
 *  			  spaces/tabs, or by the start/end of the string.
 *
 *  			  Words will be separated by only one space in the output.
 * =================================================================================
 */
void roString(char *stringPtr) {
	char	*newStringMemoryAreaPtr = getLengthForNewString(stringPtr);
	size_t	firstWordLength = getFirstWordLength(stringPtr);

	newStringMemoryAreaPtr = intializeNewStringPtr(newStringMemoryAreaPtr,
			stringPtr, firstWordLength);
	writeNewStringPtr(newStringMemoryAreaPtr);
	free(newStringMemoryAreaPtr);
}		/* -----  end of function roString  ----- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getLengthForNewString
 *  Description:  Returns a malloced region of memory for newStringPtr.
 * =================================================================================
 */
char	*getLengthForNewString (char *stringPtr) {
	size_t	i = 0;
	char	*newStringPtr = NULL;
	size_t	stringLength = 0;

	while (stringPtr[i]) {
		if (stringPtr[i] > 32 || (stringPtr[i] < 33 && stringPtr[i + 1] > 32)) {
			stringLength++;
		}
		i++;
	}
	if (stringPtr[--i] < 33) {
		stringLength--;
	}
	newStringPtr = (char *)malloc(sizeof(*newStringPtr) * stringLength + 1);
	stringLength++;
	while (stringLength) {
		newStringPtr[stringLength--] = '\0';
	}
	return (newStringPtr);
}		/* -----  end of function getLengthForNewString  ----- */


/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getFirstWordLength
 *  Description:  Returns the length of the first word in the string pointed to
 * 				  by stringPtr.
 * =================================================================================
 */
size_t	getFirstWordLength(char *stringPtr)
{
	size_t	firstWordLength = 0;

	while (stringPtr[firstWordLength] < 33) {
		firstWordLength++;
	}
	while (stringPtr[firstWordLength] && (stringPtr[firstWordLength] > 32)) {
		firstWordLength++;
	}
	return (firstWordLength);
}		/* -----  end of function getFirstWordLength  ----- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  intializeNewStringPtr
 *  Description:  Intialize newStringPtr
 * =================================================================================
 */
char *intializeNewStringPtr(char *newStringPtr, char *stringPtr, size_t
		firstWordLength) {
	size_t	i = firstWordLength;
	size_t	index = 0;
	size_t	multipleWordsFlag = 0;

	while (stringPtr[i] < 33 && stringPtr[i]) {
		i++;
	}
	while (stringPtr[i]) {
		multipleWordsFlag = 1;
		if (stringPtr[i] > 32 || (stringPtr[i] < 33 && stringPtr[i + 1] > 32 &&
					index)) {
			newStringPtr[index++] = stringPtr[i];
		}
		i++;
	}
	i = 0;
	if (multipleWordsFlag) {
		newStringPtr[index++] = ' ';
	}
	while (stringPtr[i++] < 33) {
		firstWordLength--;
	}
	i--;
	while (firstWordLength--) {
		newStringPtr[index++] = stringPtr[i++];
	}
	return (newStringPtr);
}		/* -----  end of function intializeNewStringPtr  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  writeNewStringPtr
 *  Description:  Writes the string pointed to by newStringPtr to the stdout.
 * =====================================================================================
 */
void	writeNewStringPtr(char *newStringPtr)
{
	while (*newStringPtr) {
		write(1, &*newStringPtr, 1);
		newStringPtr++;
	}
}		/* -----  end of function writeNewStringPtr  ----- */
