#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_ultimate_range(int **range, int min, int max);

int test(int nb, int nb1)
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, nb, nb1));
	int i = 0;
	while (i < nb1 - nb)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}

int main ()
{
	test(0, 30);
	test(30, 0);
}
