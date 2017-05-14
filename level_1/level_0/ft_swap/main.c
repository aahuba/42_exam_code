void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c = 1;
	int d = 3;
	a = &c;
	b = &d;
	ft_swap(a, b);
}
