#include <unistd.h>

void	aff_a(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a\n", 2);
	else
		aff_a(argv[1]);
	return (0);
}

void	aff_a(char *str)
{
	int	x;
	int	if_a;

	x = 0;
	if_a = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 'a')
			if_a = 1;
		x++;
	}
	if (if_a == 1)
		write(1, "a", 1);
	write(1, "\n", 1);
}
