#include <limits.h>
#include <stdio.h>

void	ft_putnbr_base(int nb, char *base);

int main()
{
	int i = -10;
	while (i < 20)
	{
		ft_putnbr_base(i, "01");
		printf("\n");
		i++;
	}
	ft_putnbr_base(2, "gtaio luSnemf");
	ft_putnbr_base(16, "0123456789abcdefg");
		printf("\n");
	ft_putnbr_base(-42, "01234567");
		printf("\n");
	ft_putnbr_base(-42, "01234ABC");
		printf("\n");
	ft_putnbr_base(42, "aff");
		printf("   <=== should be empty \n");
	ft_putnbr_base(42, "2+3");
		printf("   <=== should be empty\n");
	char base[100] = "0123456789ABCDEF";
	printf("Next number should be:\n7FFFFFFF\nAnd is:\n");
	ft_putnbr_base(INT_MAX, base);
	printf("Next number should be:\n-80000000\nAnd is:\n");
	ft_putnbr_base(INT_MIN, base);
	printf("Next number should be:\n0\nAnd is:\n");
	ft_putnbr_base(0, base);
	return (0);
}
