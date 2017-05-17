/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 12:43:27 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/06 12:03:24 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	tab_mult(char *str);
int	ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_printnbr(int nbr);

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

void	tab_mult(char *str)
{
	int	nbr = ft_atoi(str);
	int	single_digit = 0;
	int	result = 0;

	while (++single_digit != 10)
	{
		result = nbr * single_digit;
		ft_putchar(single_digit + '0');
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_printnbr(nbr);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_printnbr(result);
		write(1, "\n", 1);
	}
}

int	ft_atoi(char *str)
{
	int	nbr = 0;

	while (*str)
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return nbr;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_printnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
