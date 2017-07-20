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
 *    				}
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
#include <unistd.h>
#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  print_ascii_or_dot
 *  Description:  If a byte can be printed as an ascii character it will print
 *  			  that character if not prints a dot.
 * =====================================================================================
 */
static void	print_ascii_or_dot(const unsigned char *p_mem_area, size_t size, size_t i)
{
	while (i % 16 && i < size)
	{
		if (p_mem_area[i] >= 32 && p_mem_area[i] <= 126)
		{
			write(1, &p_mem_area[i], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}		/* -----  end of function print_ascii_or_dot  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  print_hex_value
 *  Description:  Prints each individual value
 * =====================================================================================
 */
static void print_hex_value(unsigned char half_byte)
{
	unsigned char	letter;
	unsigned char	i;

	letter = 'a';
	i = 9;
	if (half_byte < 10)
	{
		half_byte += '0';
		write(1, &half_byte, 1);
	}
	else
	{
		while (half_byte != ++i)
		{
			letter++;
		}
		write(1, &letter, 1);
	}
}		/* -----  end of function print_hex_value  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printHexAreaBytes
 *  Description:  Prints the hex values of each byte or spaces if there is not
 *  			  enough bytes to print.
 * =====================================================================================
 */
static void	print_16_hex_values(const unsigned char *p_mem_area, size_t size, size_t i)
{
	while (i % 16 && i < size)
	{
		print_hex_value((unsigned char)p_mem_area[i] / 16);
		print_hex_value((unsigned char)p_mem_area[i] % 16);
		if (!(i % 4))
		{
			write(1, " ", 1);
		}
		++i;
	}
	while (i % 16)
	{
		write(1, " ", 1);
		i++;
	}
}		/* -----  end of function printHexAreaBytes  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printMemory
 *  Description:  Displays the memory of memoryArea
 * =====================================================================================
 */
void print_memory (const void *addr, size_t size)
{
	const unsigned char	*memory_area_bytes_ptr;
	size_t				i;

	memory_area_bytes_ptr = addr;
	i = 0;
	while (i < size)
	{
		print_16_hex_values(&memory_area_bytes_ptr[i], size, i);
		print_ascii_or_dot(&memory_area_bytes_ptr[i], size, i);
		i += 16;
	}
}		/* -----  end of function printMemory  ----- */
