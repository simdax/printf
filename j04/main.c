/* ft_eight_queens_puzzle.c */
/* ft_eight_queens_puzzle_2.c */
/* ft_fibonacci */
/* ft_find_next_prime.c */
/* ft_is_prime.c */
//ft_iterative_power.c

#include "headers.h"

#include <stdio.h>


int main () 
{
	printf("%d\n", ft_iterative_factorial(16));
	printf("%d\n", ft_recursive_factorial(20));
	int i;
	for(i = 0; i < 3; i++)	
	{
		printf("%d\n", ft_recursive_power(3, i));	
		printf("%d\n", ft_iterative_power(3, i));
	}
	for(i = 0; i < 50000; i ++)	
	{
		printf("sqrt = %d\n", ft_sqrt(i));
	}
}
