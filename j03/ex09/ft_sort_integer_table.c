void	ft_sort_integer_table(int *tab, int size);

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
		}
		i++;
	}
}
