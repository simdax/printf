#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main()
{
	char str[] = "coucofdsfdsu";
	char str1[] = "";
	char str2[250] = "coucofdsfdsu";

	printf("%s\n", strdup(str));
	printf("%s", ft_strdup(str));
	printf("\n-----------------\n");
	printf("%s\n", strdup(str1));
	printf("%s", ft_strdup(str1));
	printf("\n-----------------\n");
	printf("%s\n", strdup(str2));
	printf("%s", ft_strdup(str2));
	printf("\n-----------------\n");
	return (0);
}
