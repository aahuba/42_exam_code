/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  driver for ft_atoi_base
 *
 *        Version:  1.0
 *        Created:  04/20/2017 11:15:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =====================================================================================
 */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	printf ("%d", ft_atoi_base("11", 2));
}
