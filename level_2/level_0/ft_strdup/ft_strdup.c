#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int	i = 0;

	while (src[i])
		i++;
	result = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
