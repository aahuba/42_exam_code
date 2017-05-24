#include <stdio.h>

void	sortIntTab(int *tab, unsigned int size);

int	main(void) {
	int tab[] = { 1, 4, 2, 0, 5, 2 };
	unsigned int	size = 6;

	sortIntTab(tab, size);
}
