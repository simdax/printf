int ft_putchar(char c);
#include "../ft_putchar.c"

void ft_print_comb ()
{
	int i = 48;
	int j = 0;
	int k = 0;

	while(i < (48 + 8))
	{
		j = i + 1;
		while (j < (48 + 9)) 
		{
			k = j + 1;
			while (k < (48+10)) 
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if(i != (48+7))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
