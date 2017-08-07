
int		main(int size)
{
	int i;
	int j;
	int tab[8][8];

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	
	put_queen()

	return (0);
}

void	p_mat(int tab[8][8]){
	int i;
	int j;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%d", tab[i][j])
			j++;
		}
		i++;
	}
	
}
