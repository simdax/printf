#include "../headers.h"

int *ft_map(int *tab, int length, int(*f)(int));

int ft_add1(int nbr);
int  ft_add1(int nbr)
{
	return (nbr + 1);
}

int main()
{
	int 	tab[] = {1, 2, 3, 4, 5};
	int		*copy;

	copy = ft_map(tab, 5, &ft_add1);
	int i = 0;
	while(i < 5)
		printf("%d\n", copy[i++]);
}
