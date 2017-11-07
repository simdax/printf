#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_compact(char **tab, int length);

int main()
{
	char *str[9] = { "fdsf", NULL, "muchahco","","muchahco","muchahco","muchahco","ok dak" };
	printf("%d", ft_compact(str, 8));
	int i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
