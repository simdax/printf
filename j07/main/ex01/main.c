#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_range(int min, int max);

int main()
{
	int nb = 0;
	int nb1 = 30;
//	char str[] = "coucou";
	int *tab;

	tab = ft_range(nb, nb1);
	printf("%p", tab);
	printf("%d", tab[0]);
/* 	while(*tab) */
/* 	{ */

/* 		tab++; */
/* 	} */

	return (0);
}
