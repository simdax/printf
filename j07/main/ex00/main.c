#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main()
{
	char str[] = "coucofdsfdsu";
	char str1[] = "";

	printf("%s\n", strdup(str));
	printf("%s", ft_strdup(str));

	printf("%s\n", strdup(str1));
	printf("%s", ft_strdup(str1));
	return (0);
}
