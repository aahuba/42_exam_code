/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:57:07 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/14 16:09:51 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned int	bits;
	unsigned int	byte;

	result = 0;
	bits = 8;
	byte = 128;
	while (bits--)
	{
		result = result + (octet % 2) * byte;
		byte /= 2;
		octet >>=1;
	}
	return (result);
}
