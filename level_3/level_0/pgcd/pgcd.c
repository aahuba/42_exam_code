#include <stdlib.h>
#include <stdio.h>

void	pgcd(char *str1, char *str2)
{
	int	int1 = atoi(str1);
	int	int2 = atoi(str2);
	int	denominator = 1;
	int	highest_denominator = 0;

	while (denominator <= int1 && denominator <= int2)
	{
		if (!(int1 % denominator) && !(int2 % denominator))
			highest_denominator = denominator;
		denominator++;
	}
	printf("%d", highest_denominator);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	printf("%s", "\n");
	return (0);
}
