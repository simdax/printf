#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_active_bits(int value);
unsigned int l_ft_active_bits(int value);

int main()
{
	int i = 0;

	while (i < 60)
	{
		printf("%d ", ft_active_bits(i));
		printf("%d\n", l_ft_active_bits(i));
		i++;
	}
	return (0);	
}
