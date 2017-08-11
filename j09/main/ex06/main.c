#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_destroy(char ***factory);

char	*factory()
{

}

int main()
{
	char **factory;

	printf("%p", factory);
	ft_destroy(&factory);
	printf("%p", factory);
	return (0);
}
