/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Driver for printMemory
 *
 *        Version:  1.0
 *        Created:  06/06/2017 15:37:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>


void	print_memory(const void *addr, size_t size);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Driver for printMemory
 * =====================================================================================
 */
int	main (void) {
	int	tab[10] = { 0, 23, 150, 255, 12, 16, 21, 42 };
//	unsigned char *str;
//	typedef union unsignedInspect unsignedInspect; 
//	union unsignedInspect {
//	unsigned val;
//	unsigned char bytes[sizeof(unsigned)]; };
//	unsignedInspect twofold = { .val = 0x104, };	
	
//	str = (unsigned char *)tab;
//	printf("%x", str[1]);
//	write(1, " ", 1);
	print_memory(tab, sizeof(tab));
//	printf("%p", (void *)&tab[2]);
//	write(1, &array[0], 1);
//	write(1, &array[1], 1);
//	write(1, &array[2], 1);	
//	write(1, &array[3], 1);
	
}				/* ----------  end of function main  ---------- */
