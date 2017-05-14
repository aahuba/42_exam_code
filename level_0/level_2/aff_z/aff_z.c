#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 1 && argv[0])
		write(1, "z\n", 2);
}
