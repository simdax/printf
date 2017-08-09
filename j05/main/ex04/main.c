char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "loulous";
	int i = 0;

	while (i < 30)
	{
		char dest[46] = "coucou les supers megas gigas";
		printf("%s\n", ft_strncpy(dest, src, i));
		i += 5;
	}

	printf("\n \n");

	i = 0;
	while (i < 30)
	{
		char dest[46] = "coucou les supers megas gigas";
		printf("%s\n", strncpy(dest, src, i));
		i += 5;
	}


//	printf("%s\n", strcpy("coucou les", "loulous"));

	return (0);
}

