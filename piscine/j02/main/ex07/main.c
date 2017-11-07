#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_print_combn(int);

int main()
{
	int i = 2;
	while (i < 10)
	{
		ft_print_combn(i);
		printf("\n");
		i++;
	}
	return (0);
}
