char *ft_strncat(char *dest, char *src, int nb);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[20]= "coucou";
	char src[50]= "les loulous";	
	printf("%s", ft_strncat(dest, src, 1));
	printf("%s", ft_strncat(dest, src, 10));
	printf("%s", ft_strncat(dest, src, 20));
	printf("%s", ft_strncat(dest, src, 30));

	printf("\n");

	char dest1[20]= "coucou";
	char src1[50]= "les loulous";
	printf("%s", strncat(dest1, src1, 1));
	printf("%s", strncat(dest1, src1, 10));
	printf("%s", strncat(dest1, src1, 20));
	printf("%s", strncat(dest1, src1, 30));

	return (0);
}
