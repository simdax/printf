#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_max(int *tab, int length);

int main()
{
	int *tab;
	tab = (int *)malloc(sizeof(int)*4);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 53;
	tab[3] = 4;
	printf("%d", ft_max(tab, 4));
	return (0);
}
