/*
 * =================================================================================
 *
 *       Filename:  brainFuck.c
 *
 *    Description:  Assignment name  : brainFuck
 *    				Expected files   : *.c, *.h
 *    				Allowed functions: write, malloc, free
 *    ------------------------------------------------------------------------------
 *
 *    				Write a Brainfuck interpreter program.
 *   				The source code will be given as first parameter.
 *    				The code will always be valid, with no more than 4096
 *    				operations.
 *    				Brainfuck is a minimalist language. It consists of an array of
 *    				bytes (in our case, let's say 2048 bytes) initialized to zero,
 *    				and a pointer to its first byte.
 *
 *    				Every operator consists of a single character :
 *    				- '>' increment the pointer ;
 *    				- '<' decrement the pointer ;
 *    				- '+' increment the pointed byte ;
 *    				- '-' decrement the pointed byte ;
 *    				- '.' print the pointed byte on standard output ;
 *    				- '[' go to the matching ']' if the pointed byte is 0 (while
 *    				start) ;
 *    				- ']' go to the matching '[' if the pointed byte is not 0 (while
 *    				end).
 *
 *    				Any other character is a comment.
 *
 *    				Examples:
 *
 *    				$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+
 *    				.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>."
 *    				| cat -e
 *    				Hello World!$
 *    				$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>----
 *    				----.>+++++.>." | cat -e
 *    				Hi$
 *    				$>./brainfuck | cat -e
 *    				$
 *
 *        Version:  1.0
 *        Created:  05/30/2017 11:49:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include	<stdlib.h>
/******************************************************
**               funtion prototypes                 ***
*******************************************************/
void brainFuck(char *brainFuckPtr);

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  A Brainfuck interpreter program.
 *  			  The source code will be given as first parameter.
 *  			  The code will always be valid, with no more than 4096
 *  			  operations.
 *  			  Brainfuck is a minimalist language. It consists of an array of
 *  			  bytes
 *  			  (in our case, let's say 2048 bytes) initialized to zero, and a
 *  			  pointer to its first byte.
 *
 *  			  Every operator consists of a single character :
 *  			  - '>' increment the pointer ;
 *  			  - '<' decrement the pointer ;
 *  			  - '+' increment the pointed byte ;
 *  			  - '-' decrement the pointed byte ;
 *  			  - '.' print the pointed byte on standard output ;
 *  			  - '[' go to the matching ']' if the pointed byte is 0 (while
 *  			  start) ;
 *  			  - ']' go to the matching '[' if the pointed byte is not 0 (while
 *  			  end).
 *
 *  			  Any other character is a comment.
 * =================================================================================
 */
int	main(int argc, char *argv[])
{
	if (argc > 1) {
		brainFuck(argv[0]);
	}
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  brainFuck
 *  Description:  Takes a brain fuck string pointer and interpretes and
 *  			  prints it on the stdout.
 * =================================================================================
 */
void	brainFuck(char *brainFuckPtr)
{
	size_t 	i = 0;
	char	currentChar;

	while (brainFuckPtr[i]) {
		
	}
}		/* -----  end of function brainFuck  ----- */
