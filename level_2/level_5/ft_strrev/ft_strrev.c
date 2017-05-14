char	*ft_strrev(char *str)
{
	int	i = 0;
	int	j = 0;
	char	k;

	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		k = str[j];
		str[j] = str[i];
		str[i] = k;
		i--;
		j++;
	}
	return (str);
}
