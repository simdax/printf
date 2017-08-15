#include "../headers.h"

void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nbr);

int main()
{
	int 	tab[] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
}
