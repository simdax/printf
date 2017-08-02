int ft_putchar(char c);
#include "../ft_putchar.c"
#include <stdio.h>
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

void ft_print_comb2 ()
{
	int i = 48;
	int j = 0;

	while(i < (48 + 98))
	{
		j = i + 1;
		while(j < (48 + 99))
		{
			printNumber(i);
			ft_putchar(' ');
			printNumber(j);	
			if(i != 48 + 97){
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
