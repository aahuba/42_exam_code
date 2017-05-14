#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_hex(char *str)
{
	int	str_int = 0;
	int	hex[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f' };
	int	result[500];
	int	i;
	int	j = 0;
	int	k = 0;

	while (*str)
		str_int = str_int * 10 + *str++ - '0';
	while (str_int)
	{
		i = str_int % 16;
		result[j++] = hex[i];
		str_int /= 16;
	}
	j--;
	while (j >= 0)
	{
		if (result[j] < 10)
		{
			k = result[j] + '0';
			write(1, &k, 1);
		}
		else
			write(1, &result[j], 1);
		j--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(argv[1]);
	write(1, "\n", 1);
	return (0);
}
