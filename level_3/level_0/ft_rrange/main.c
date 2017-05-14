#include <stdio.h>

int	*ft_rrange(int start, int end);

int	main(void)
{
	int	*array = ft_rrange(0, -3);

	printf("%d", array[2]);
	return (0);
}
