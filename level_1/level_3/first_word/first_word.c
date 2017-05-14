#include <unistd.h>

void	first_word(char *str)
{
	while (*str < 33 && *str > 0)
		str++;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
		if (*str < 33)
			break ;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
