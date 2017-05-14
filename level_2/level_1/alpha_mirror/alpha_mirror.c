#include <unistd.h>

void	alpha_mirror(char *str)
{
	char	lower_case;
	char	upper_case;
	int	i;
	char	print_char;
	int	already_printed;

	while (*str)
	{
		already_printed = 0;
		i = 25;
		lower_case = 'a';
		upper_case = 'A';
		while (lower_case < 'n')
		{
			if (*str == lower_case++ || *str == upper_case++)
			{
				print_char = *str + i;
				write(1, &print_char, 1);
				already_printed = 1;
				break ;
			}
			i -= 2;
		}
		lower_case = 'n';
		upper_case = 'N';
		i = 1;
		while (lower_case < 123 && !already_printed)
		{
			if (*str == lower_case++ || *str == upper_case++)
			{
				print_char = *str - i;
				write(1, &print_char, 1);
				break ;
			}
			i += 2;
		}
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
