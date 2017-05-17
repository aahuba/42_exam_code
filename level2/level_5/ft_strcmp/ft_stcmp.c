int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*str1 = (unsigned char *)s1;
	unsigned char	*str2 = (unsigned char *)s2;

	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

