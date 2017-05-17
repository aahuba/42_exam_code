#include <unistd.h>

void	expand_str(char *str)
{
	int	i = 0;
	int	write_spaces;
	int	space_next;

	while ((str[i] == ' ' || str[i] == '	') && str[i])
		i++;
	while (str[i])
	{
		write_spaces = 3;
		space_next = 0;
		if ((str[i] != ' ' && str[i] != '	') && str[i])
			write(1, &str[i], 1);
		if ((str[i] == ' ' || str[i] == '	') && str[i])
		{
			while ((str[i] == ' ' || str[i] == '	') && str[i])
				i++;
			if (str[i])
				while (write_spaces--)
					write(1, " ", 1);
			space_next = 1;
		}
		if (!space_next)
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
