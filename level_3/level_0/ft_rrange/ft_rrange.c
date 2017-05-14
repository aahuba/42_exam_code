#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*array;
	int	range_size;
	int	i = 0;

	if (end < 0)
	{
		range_size = end - start - 1;
		range_size *= -1;
	}
	else
		range_size = end - start + 1;
       if (!(array = (int*)malloc(sizeof(int) * range_size)))
	       return (NULL);
       if (end < 0)
		while (range_size--)
			array[i++] = end++;
	else
		while(range_size--)
			array[i++] = end--;
	return (array);
}
