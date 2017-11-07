#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_join(char **tab, char *sep);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_join(argv, "%%"));
	return (0);
}
