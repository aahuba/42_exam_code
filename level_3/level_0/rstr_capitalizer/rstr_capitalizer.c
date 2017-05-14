#include <unistd.h>
#include <stdio.h>

void	rstr_capitalizer(char *str);

int	main(int argc, char **argv)
{
    int	i = 1;
    
    while (--argc)
	    rstr_capitalizer(argv[i++]);
    if (i == 1)
	    write(1, "\n", 1);
    return (0);
}

void	rstr_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{		
		if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] > 32))
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] < 33))
			str[i] -= 32;
		write(1, &str[i++], 1);
       }
	write(1, "\n", 1);
}
