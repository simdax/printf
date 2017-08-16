char *ft_strcpy(char *dest, char *src);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[20] = "coucou les ";
	char src[] = "loulfasdsfous";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	char dest1[20] = "coucou les  ";
	char src1[] = "loulfasdfous";
	strcpy(dest1, src1);
	printf("%s\n", dest1);



	return (0);
}
