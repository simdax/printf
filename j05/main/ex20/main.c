void	ft_putnbr_base(int nb, char *base);

int main()
{
	int i = -10;
	while (i < 20)
	{
		ft_putnbr_base(i, "01");
		i++;
	}
	ft_putnbr_base(16, "0123456789abcdefg");
	ft_putnbr_base(42, "01234567");
	ft_putnbr_base(42, "01234ABC");
	ft_putnbr_base(42, "aff");
	ft_putnbr_base(42, "");
	ft_putnbr_base(42, "2+3");
	return (0);
}
