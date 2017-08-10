#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main()
{
	char str[] = "coucofdsfdsu";

	printf("%s\n", strdup(str));
	printf("%s", ft_strdup(str));
	return (0);
}
