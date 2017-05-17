#include <unistd.h>

void	wdmatch(char *str1, char *str2)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	k = 0;

	while (str1[i])
		i++;
	while (str1[j])
	{
		while (str2[k])
		{
			if (str1[j] == str2[k])
			{
				i--;
				k++;
				break ;
			}
			k++;
		}
		j++;
	}
	if (i == 0)
	{
		while (*str1)
		{
			write(1, &*str1, 1);
			str1++;
		}
	}
}


int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
