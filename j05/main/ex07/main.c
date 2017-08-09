int ft_strncmp(char *s1, char *s2, unsigned int n);

#include <string.h>
#include <stdio.h>

int main()
{

//	printf("%l\n", &"loulous" - &"coucou");

	printf("%d\n", strncmp("loulous", "coucou", 151));
	printf("%d\n", strncmp("truc", "truc", 3));
	printf("%d\n", strncmp("rien", "du tout", 2));
	printf("%d\n", strncmp("loulous", "", 0));
	printf("%d\n", strncmp("", "fsdfdsf", 17));

	printf("\n \n");

	printf("%d\n", ft_strncmp("loulous", "coucou", 151));
	printf("%d\n", ft_strncmp("truc", "truc", 3));
	printf("%d\n", ft_strncmp("rien", "du tout", 2));
	printf("%d\n", ft_strncmp("loulous", "", 0));
	printf("%d\n", ft_strncmp("", "fsdfdsf", 12));

	return (0);
}

