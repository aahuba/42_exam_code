/*
 * ===============================================================================
 *
 *       Filename:  ft_split.c
 *
 *    Description:  Write a function that takes a string, splits it into words,
 *    				and returns them as a NULL-terminated array of strings.
 *
 *    				A "word" is defined as a part of a string delimited either by
 *    				spaces/tabs/new lines, or by the start/end of the string.
 *
 *    				Your function must be declared as follows:
 *
 *    				char    **ft_split(char *str);
 *        Version:  1.0
 *        Created:  05/17/2017 09:50:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * ===============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
/******************************************************
**               funtion prototypes                 ***
*******************************************************/
char **ft_split (char *str);
char *intializeStrings (char *str, int lengthOfWord);
size_t wordLen (char *str);
static unsigned int countWords (char *str);

/* 
 * ===  FUNCTION  ================================================================
 *         Name:  ft_split
 *  Description:  Takes a string, splits it into words, and returns them as
 *  			  a NULL-terminated array of strings.
 * ===============================================================================
 */
char	**ft_split (char *str) {
	char			**arrayOfStrings = NULL;
	unsigned int	words;
	size_t			i;
	size_t			lengthOfWord;

	i = 0;
	words = countWords(str);
	arrayOfStrings = (char **)malloc(sizeof(char *) * words + 1);
	while (words--) {
		while (*str == ' ' || *str == '	' || *str == '\n')
			str++;
		lengthOfWord = wordLen(str);
		arrayOfStrings[i++] = intializeStrings(str, lengthOfWord);
		while (lengthOfWord--)
			str++;
	}
	arrayOfStrings[i] = NULL;
	return (arrayOfStrings);
}		/* -----  end of function ft_split  ----- */

/* 
 * ===  FUNCTION  ================================================================
 *         Name:  countWords
 *  Description:  Counts the words in the string pointed at by *str
 * ===============================================================================
 */
static unsigned int	countWords (char *str) {
	unsigned int	words;

	words = 1;
	while (*str == ' ' || *str == '	' || *str == '\n')
		str++;
	while (*str) {
		if (*str == ' ' || *str == '	' || *str == '\n') {
			words++;
			while (*str == ' ' || *str == '	' || *str == '\n')
				str++;
		}
		str++;
	}
	return (words);
}		/* -----  end of function countWords  ----- */


/* 
 * ===  FUNCTION  ================================================================
 *         Name:  intializeStrings
 *  Description:  Allocates with malloc and returns the stings
 * ===============================================================================
 */
char	*intializeStrings (char *str, int lengthOfWord) {
	char	*row;
	size_t	i = 0;

	row = (char *)malloc(sizeof(char) * lengthOfWord + 1);
	while (lengthOfWord--) {
		row[i] = str[i];
		i++;
	}
	row[i] ='\0';
	return (row);
}		/* -----  end of function intializeStrings  ----- */


/* 
 * ===  FUNCTION  ================================================================
 *         Name:  wordLen
 *  Description:  Finds the length of a word.
 * ===============================================================================
 */
size_t	wordLen (char *str) {
	size_t	len = 0;

	while (*str == ' '|| *str == '	' || *str == '\n')
		str++;
	while (*str > 32) {
		str++;
		len++;
	}
	return (len);
}		/* -----  end of function wordLen  ----- */
