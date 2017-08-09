void	ft_putnbr_base(int nb, char *base);

int main()
{
	ft_putnbr_base(16, "01234abcd");
	ft_putnbr_base(16, "0123456789abcdefgsdgdfsg");
	ft_putnbr_base(42, "01234567");
	ft_putnbr_base(42, "01234ABC");
	ft_putnbr_base(42, "");
	return (0);
}
