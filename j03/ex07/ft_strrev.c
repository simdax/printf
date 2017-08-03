
char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	tmp;

	lenght = 0;
	i = 0;
	while (str[length])
	{
		length++;
	}
	while (i < (length / 2))
	{
		tmp = str[length - 1];
		str[length - i] = str[i];
		str[i] = tmp;
	}
	return (str);
}
