#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_scrambler(int ***a, int *b, int *******c, int ****d);

int main()
{
	int nb = 1;
	int nb1 = 2;
	int nb2 = 3;
	int nb3 = 4;
	
	int *pnb0 = &nb;
	int **pnb01 = &pnb0;
	int ***pnb02 = &pnb01;

	int *pnb1 = &nb2;
	int **pnb11 = &pnb1;
	int ***pnb12 = &pnb11;
	int ****pnb13 = &pnb12;
	int *****pnb14 = &pnb13;
	int ******pnb15 = &pnb14;
	int *******pnb16 = &pnb15;

	int *pnb2 = &nb3;
	int **pnb21 = &pnb2;
	int ***pnb22 = &pnb21;
	int ****pnb23 = &pnb22;

	int *pnb3 = &nb1;

	ft_scrambler(pnb02, pnb3, pnb16, pnb23);
	printf("%d et %d et %d et %d", nb, nb1, nb2, nb3);
	return (0);
}
