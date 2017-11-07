#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split(char *str, char *seps);

int main()
{
	char str[] = " ::f:  putain, : de sa race de    merde   ";
	char **tab;

	tab = ft_split(str, " ,:");
	while (*tab)
		printf("%s\n", *tab++);
	return (0);
}
