#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range;
	int nb = 0;
	int nb1 = 30;

	printf("%d\n", ft_ultimate_range(&range, nb, nb1));
	int i = 0;
	while (i < nb1 - nb)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
