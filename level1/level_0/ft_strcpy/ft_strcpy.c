#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	x = 0;
	while (s2[x] != '\0')
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	x++;
	s1[x] = '\n';
	printf("%s", s1);
	return(s1);
}
