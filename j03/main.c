void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_swap(int *a, int *b);
char *ft_strrev(char *str);
int ft_atoi(char *str);
void ft_sort_integer_table(int *tab, int size);

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex06/ft_swap.c"
#include "ex02/ft_div_mod.c"
#include "ex03/ft_ultimate_div_mod.c"
#include "ex04/ft_putstr.c"
#include "ex05/ft_strlen.c"
#include "ex07/ft_strrev.c"
#include "ex08/ft_atoi.c"
#include "ex09/ft_sort_integer_table.c"

#include <stdio.h>
#include <stdlib.h>

int main ()
{

	printf("%d", atoi("4564568489741531"));

int a = 0;
int b = 0;
char *str = "blabli";
int tab[7] = {7, 6, 1, 4, 3, 5, 1};

ft_ft(&a);
printf("a : %d, b : %d\n", a, b);

int *p = &b;
int **pp = &p;
int ***ppp = &pp;
int ****pppp = &ppp;
int *****ppppp = &pppp;
int ******pppppp = &ppppp;
int *******ppppppp = &pppppp;
int ********pppppppp = &ppppppp;
int *********ppppppppp = &pppppppp;
ft_ultimate_ft(ppppppppp);
printf("a : %d, b : %d\n", a, b);

int div = a/b;
int mod = a%b;
ft_div_mod(a, b, &div, &mod);
printf("a : %d, b : %d\n", a, b);
ft_ultimate_div_mod(&a, &b);
printf("a : %d, b : %d\n", a, b);

ft_putstr(str);

int l = ft_strlen(str);
printf("\n length : %d \n", l);

a=8; b=9;
ft_swap(&a, &b);

char test[] = "attention";

printf("%s", ft_strrev(test));
printf("\n");
printf("\n %d \n", ft_atoi("454566"));
printf("\n %d \n", ft_atoi("-4566"));

ft_sort_integer_table(tab, 7);
int i = 0;
while(i < 7)
{
	printf("%d", tab[i]);
	i++;
}
  
}
