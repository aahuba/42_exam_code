#include <stdio.h>

void	sortIntTab(int *tab, unsigned int size);

int	main(void) {
	int tab[3] = { 1, 4, 2 };
	unsigned int	size = 3;

	sortIntTab(tab, size);
}
