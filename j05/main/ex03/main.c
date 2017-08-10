char *ft_strcpy(char *dest, char *src);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "coucou les ";
	char src[] = "loulfasds";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
/* 	char dest1[] = "coucou les "; */
/* 	char src1[] = "loulfasdfous"; */
/* 	strcpy(dest1, src1);	 */
/* 	printf("%s\n", dest1); */



	return (0);
}
