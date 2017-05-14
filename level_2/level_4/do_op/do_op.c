#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	do_op(char *numbers1, char *sign, char *numbers2)
{
	int	num1 = atoi(numbers1);
	int	num2 = atoi(numbers2);

	if (*sign == '+')
		printf("%d", (num1 + num2));
	else if (*sign == '-')
		printf("%d", (num1 - num2));
	else if (*sign == '*')
		printf("%d", (num1 * num2));
	else if (*sign == '/')
		printf("%d", (num1 / num2));
	else
		printf("%d", (num1 % num2));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	printf("%c", '\n');
	return (0);
}
