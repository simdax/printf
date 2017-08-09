char *ft_strstr(char *str, char *to_find);

#include <string.h>
#include <stdio.h>

int main()
{
	printf("%s\n", ft_strstr("coucou les loulous", "loulous"));
	printf("%s\n", ft_strstr("coucou les loulous", "rien"));
	printf("%s\n", ft_strstr("coucou les loulous", ""));
	printf("%s\n", ft_strstr("", "rien"));

	printf("\n \n");

	printf("%s\n", strstr("coucou les loulous", "loulous"));
	printf("%s\n", strstr("coucou les loulous", "rien"));
	printf("%s\n", ft_strstr("coucou les loulous", ""));
	printf("%s\n", ft_strstr("", "rien"));

	return (0);
}
