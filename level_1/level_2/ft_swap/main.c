#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 4;
	int	b = 3;

	ft_swap(&a, &b);
	printf("%d", a);
	return (0);
}
