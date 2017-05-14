#include <unistd.h>
#include <stdio.h>

void	rot_13(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
			*str = *str + 13;
		else if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
			*str = *str - 13;
		write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
