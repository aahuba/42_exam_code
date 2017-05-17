#include <stdio.h>

int	max(int* tab, unsigned int len);

int	main(void)
{
	int	tab[7] = { 0, 1, 320, 3, 42, 2, 1000 };
	
	printf("%d", max(tab, 7));
	return (0);
}
