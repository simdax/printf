char *ft_strcpy(char *dest, char *src);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[46] = "coucou les ";
	char src[46] = "loulous";
	
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));

//	printf("%s\n", strcpy("coucou les", "loulous"));

	return (0);
}
