char *ft_strcat(char *dest, char *src);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[20]= "coucou";
	char src[50]= "les loulous";
	
	printf("%s", ft_strcat(dest, src));

	printf("\n");

	char dest1[20]= "coucou";
	char src1[50]= "les loulous";
	printf("%s", strcat(dest1, src1));

	return (0);
}
