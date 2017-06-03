/*
 * =================================================================================
 *
 *       Filename:  printMemory.c
 *
 *    Description:  Assignment name  : printMemory
 *    				Expected files   : printMemory.c
 *    				Allowed functions: write
 *    ------------------------------------------------------------------------------
 *
 *    				Write a function that takes (const void *addr, size_t size), and
 *    				displays the memory as in the example.
 *
 *    				Your function must be declared as follows:
 *
 *    				void	print_memory(const void *addr, size_t size);
 *
 *    				---------
 *    				$> cat main.c
 *    				void	print_memory(const void *addr, size_t size);
 *
 *    				int	main(void)
 *    				{
 *    					int	tab[10] = {0, 23, 150, 255, 12, 16,  21, 42};
 *
 *    		              	print_memory(tab, sizeof(tab));
 *    		              		return (0);
 *    		              		}
 *    		              		$> gcc -Wall -Wall -Werror main.c print_memory.c
 *    		              		&& ./a.out | cat -e
 *    		              		0000 0000 1700 0000 9600 0000 ff00 0000
 *    		              		................$
 *    		              		0c00 0000 1000 0000 1500 0000 2a00 0000
 *    		              		............*...$
 *    		              		0000 0000 0000 0000
 *    		              		........$
 *    }
 *
 *        Version:  1.0
 *        Created:  06/02/2017 23:57:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */


