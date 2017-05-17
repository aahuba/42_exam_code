#include <unistd.h>

void	aff_last_param(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
		aff_last_param(argv[argc - 1]);
	return (0);
}

void	aff_last_param(char *str)
{
	int	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
	write (1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
