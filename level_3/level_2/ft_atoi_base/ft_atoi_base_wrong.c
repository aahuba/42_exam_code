/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:41:40 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/14 07:49:26 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*get_right_base(int str_base)
{
	int	full_array[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f' };
	int	*my_array[16];
	int	i;

	i = -1;
	my_array = NULL;
	while (++i <= str_base)
		my_array[i] = full_array[i];
	return (my_array);
}

int	ft_atoi_base(const char *str, int str_base)
{
	unsigned int	i;
	int				*array;
	int				j;
	int				result;
	char			*assign_str;

	i = 0;
	array = get_right_base(str_base);
	result = 0;
	assign_str = (char *)str;
	while (assign_str[i])
	{
		j = 0;
		if (assign_str[i] >= 'A' && assign_str[i] <= 'Z')
			assign_str[i] = assign_str[i] + 22;
		while (j < str_base)
		{
			if (assign_str[i] == array[j] && (assign_str[i] >= '0' && assign_str[i] <= '9'))
				result = result * (str[i] - '0');
			else if (assign_str[i] == array[j])
				result = result * (j - '0');
			j++;
		}
		i++;
	}
	if (str[0] == '-')
		return (result * -1);
	else
		return (result);
}

int	main(void)
{
	printf("%d", ft_atoi_base("ff", 16));
	return (0);
}
