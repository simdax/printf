char *ft_strncat(char *dest, char *src, int nb);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[20]= "coucou";
	char src[50]= "les loulous";	
	printf("%s", ft_strncat(dest, src, 1));

	printf("\n");

	char dest1[20]= "coucou";
	char src1[50]= "les loulous";
	printf("%s", strncat(dest1, src1, 1));

	return (0);
}
