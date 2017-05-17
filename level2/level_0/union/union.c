#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int	i = 0;
	int	j;
	int	is_repeat;

	while (str1[i])
	{
		j = 0;
		is_repeat = 0;
		while (j < i)
			if (str1[i] == str1[j++])
			{
				is_repeat = 1;
				break ;
			}
		if (is_repeat == 0)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		j = 0;
		is_repeat = 0;
		while (j < i)
			if (str2[i] == str2[j++])
			{
				is_repeat = 1;
				break ;
			}
		j = 0;
		while (str1[j])
		{
			if (str1[j++] == str2[i])
			{
				is_repeat = 1;
				break ;
			}
		}
		if (is_repeat == 0)
			write(1, &str2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
