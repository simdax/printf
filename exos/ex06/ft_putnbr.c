int ft_putchar(char c);
#include "../ft_putchar.c"


void printNumber(int n)
{
	int remainder = 0;
	int divided = 0;

	if(n > (48 + 9))
	{
		remainder = (n - 48) % 10;
		divided = (n - 48) / 10;
		printNumber(divided + 48);
		printNumber(remainder + 48);
	} else {
		ft_putchar(n);
	}
}

