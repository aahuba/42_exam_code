#include <unistd.h>

void	hidenp(char *needle, char *haystack)
{
	int	needle_len = 0;
	int	needle_in_haystack = 0;

	while (needle[needle_len])
		needle_len++;
	while (*needle)
	{
		while (*haystack)
		{
			if (*needle == *haystack)
			{
				needle_in_haystack++;
				break ;
			}
			haystack++;
		}
		needle++;
	}
	if (needle_len == needle_in_haystack)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}




int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
