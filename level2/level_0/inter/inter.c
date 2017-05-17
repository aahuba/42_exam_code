#include <unistd.h>
#include <stdio.h>

void	inter(char *str1, char *str2)
{
	int	i = 0;
	int	j;
	int	k;
	int	is_repeat;

	while (str1[i])
	{
		j = 0;
		is_repeat = 0;
		while (str2[j])
		{
			k = 0;
			if (str1[i] == str2[j])
			{
				while (k != i)
				{
					if (str1[i] == str1[k])
						is_repeat = 1;
					k++;
				}
				if(!is_repeat)
					write(1, &str1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
