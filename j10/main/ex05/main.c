#include "../headers.h"

int ft_is_sort(int *tab, int length, int(*f)(int, int));
int ft_cmp(int i, int j);

int  ft_cmp(int i, int j)
{
	return i - j;
}

void	dodo(int *tab)
{
	if (ft_is_sort(tab, 4, &ft_cmp))
		printf("youpi\n");
	else
		printf("ooooooooh :(\n");
}

int main()
{
	int 	tab[] = {0, 1, 2, 3};
	int 	tab1[] = {0, 1, 3, 2};

	dodo(tab);
	dodo(tab1);
}
