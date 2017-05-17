#include "libft.h"

int	ft_max(int *tab, unsigned int len)
{
	int		max;

	max = 0;
	if (!len || !tab)
		return (0);
	while (len--)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}
