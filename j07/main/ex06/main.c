#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(int argc, char **argv)
{
	char *nbr = argv[2];
	char *base_from = argv[3];
	char *base_to = argv[4];
	
	if (argc != 4)
		;
	printf("%s", ft_convert_base(nbr, base_from, base_to));

	return (0);
}
