
void ft_putnbr(int); 

#include "ft_putnbr.c"
#include "../ft_putchar.c"

int main()
{
	ft_putnbr(-2);
	ft_putchar(',');
	ft_putnbr(45);
	ft_putchar(',');
	ft_putnbr(-2147483648);
	ft_putchar(',');
 	ft_putnbr(2147483647); 
}
