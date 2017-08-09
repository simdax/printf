char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[46] = "coucou les supers megas gigas";
	char src[46] = "loulous de ouf malade";
	
	printf("%s\n", ft_strncpy(dest, src, 10));
	printf("%s\n", ft_strncpy(dest, src, 20));

	printf("%s\n", strncpy(dest, src, 10));
	printf("%s\n", strncpy(dest, src, 20));

//	printf("%s\n", strcpy("coucou les", "loulous"));

	return (0);
}

