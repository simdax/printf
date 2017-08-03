int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	char j;

	j = *str;
	while (j)
	{
		ft_putchar(j);
		j = *(str++);
	}
}
