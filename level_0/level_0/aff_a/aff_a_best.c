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
	int	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		x++;
	}
	write(1, "\n", 1);
}
