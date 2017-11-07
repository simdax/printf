#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putnbr(int);

int main()
{
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	return (0);
}
