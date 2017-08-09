int ft_strcmp(char *s1, char *s2);

#include <string.h>
#include <stdio.h>

int main()
{
	printf("%d\n", strcmp("loulous", "coucou"));
	printf("%d\n", strcmp("truc", "truc"));
	printf("%d\n", strcmp("rien", "du tout"));
	printf("%d\n", strcmp("loulous", ""));
	printf("%d\n", strcmp("", "fsdfdsf"));

	printf("\n \n");

	printf("%d\n", ft_strcmp("loulous", "coucou"));
	printf("%d\n", ft_strcmp("truc", "truc"));
	printf("%d\n", ft_strcmp("rien", "du tout"));
	printf("%d\n", ft_strcmp("loulous", ""));
	printf("%d\n", ft_strcmp("", "fsdfdsf"));

	return (0);
}
