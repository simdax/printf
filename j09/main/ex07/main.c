#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_collatz_conjecture(unsigned int base);

int main()
{
	unsigned int	base = 0;
	
	while (base < 15)
		printf("%d\n", ft_collatz_conjecture(base++));
	return (0);
}
