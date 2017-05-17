#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *s = "Hello World!";

	printf("%s", ft_strdup(s));
	return (0);
}
