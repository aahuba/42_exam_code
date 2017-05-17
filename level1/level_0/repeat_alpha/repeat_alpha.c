#include <unistd.h>

void	repeat_alpha(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	repeat_alpha(char *str)
{
	int	x;
	char	lower_case_letter;
	char	upper_case_letter;

	while (*str)
	{
		lower_case_letter = 'a';
		upper_case_letter = 'A';
		x = 1;
		while (upper_case_letter != 91)
		{
			if (*str == lower_case_letter)
			{
				while (x--)
					write(1, &lower_case_letter, 1);
				break ;
			}
			if (*str == upper_case_letter)
			{
				while (x--)
					write(1, &upper_case_letter, 1);
				break ;
			}
			if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			{
				write(1, &*str, 1);
				break ;
			}
			lower_case_letter++;
			upper_case_letter++;
			x++;
		}
		str++;
	}
}
