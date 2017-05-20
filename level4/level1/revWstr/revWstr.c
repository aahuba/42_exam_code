/*
 * =================================================================================
 *
 *       Filename:  revWstr.c
 *
 *    Description:  revWstr
 *    				Expected files   : revWstr.c
 *    				Allowed functions: write, malloc, free
 *    ------------------------------------------------------------------------------
 *
 *    				Write a program that takes a string as a parameter, and prints
 *    				its words in reverse order.
 *
 *    				A "word" is a part of the string bounded by spaces and/or tabs,
 *    				or the begin/end of the string.
 *
 *    				If the number of parameters is different from 1, the program
 *    				will display '\n'.
 *
 *    				In the parameters that are going to be tested, there won't be
 *    				any "additional" spaces (meaning that there won't be additionnal
 *    				spaces at the beginning or at the end of the string, and words
 *    				will always be separated by exactly one space).
 *
 *    				Examples:
 *
 *    				$> ./rev_wstr "le temps du mepris precede celui de
 *    				l'indifference" | cat -e
 *    				l'indifference de celui precede mepris du temps le$
 *    				$> ./rev_wstr "abcdefghijklm"
 *    				abcdefghijklm
 *    				$> ./rev_wstr "il contempla le mont" | cat -e
 *    				mont le contempla il$
 *    				$> ./rev_wstr | cat -e
 *    				$
 *
 *        Version:  1.0
 *        Created:  05/18/2017 17:24:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <unistd.h>
/******************************************************
**               funtion prototypes                 ***
*******************************************************/
void revWstr (char *str);

/* 
 * ===  FUNCTION  ================================================================
 *         Name:  main
 *  Description:  A program that takes a string as a parameter, and prints its 
 *  			  words in reverse order.
 * ===============================================================================
 */
int		main (int argc, char **argv) {
	if (argc == 2)
		revWstr(argv[1]);
	write(1, "\n", 1);
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ================================================================
 *         Name:  revWstr
 *  Description:  Prints a strings words in reverse order.
 * ===============================================================================
 */
void	revWstr (char *str) {
	int	strLen = 0;
	size_t	wordLen = 0;
	char	*revStr;
	size_t	i = 0;

	while (str[strLen])
		strLen++;
	revStr = (char *)malloc(sizeof(char) * (strLen + 1));
	while (strLen >= 0) {
		if (str[strLen] == ' ' || str[strLen] == '	') {
			wordLen = strLen + 1;
			while (str[wordLen] && str[wordLen] != ' ' && str[wordLen] != '	')
				revStr[i++] = str[wordLen++];
			revStr[i++] = ' ';
		}
		if (strLen == 0) {
			wordLen = strLen;
			while (str[wordLen] && str[wordLen] != ' ' && str[wordLen] != '	')
				revStr[i++] = str[wordLen++];
		}
		strLen--;
	}
	revStr[i] = '\0';
	i = 0;
	while (revStr[i]) {
		write(1, &revStr[i], 1);
		i++;
	}
}		/* -----  end of function revWstr  ----- */
