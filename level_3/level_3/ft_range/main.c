/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: driver for ft_range 
 *
 *        Version:  1.0
 *        Created:  04/20/2017 15:02:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */
#include <stdio.h>

int	*ft_range(int start, int end);

int	main(void)
{
	int	*array;
	
	array = ft_range(0, -3);
	printf("%d", array[3]);
}
