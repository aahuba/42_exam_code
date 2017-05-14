#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_large_int(int result)
{
	if (result < 10)
		ft_putchar(result + '0');
	else
	{
		print_large_int(result / 10);
		ft_putchar(result % 10 + '0');
	}
}

void	add_prime_sum(char *str)
{
	int	i = 2;
	int	j;
	int	prime;
	int	result = 0;
	int	number = 0;

	if (*str == '-')
	{
		write(1, "\n", 1);
		exit(1);
	}
	while (*str)
	{
		number = number * 10 + *str - '0';
		str++;
	}
	while (i <= number)
	{
		j = 2;
		prime = 0;
		while (j < i)
		{
			if (!(i  % j))
			{
				prime = 1;
				break ;
			}
			j++;
		}
		if (!prime)
			result = result + i;
		i++;
	}
	print_large_int(result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	write(1, "\n", 1);
	return (0);
}
