char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "je suis la premiere phrase";
	int i = 0;

	while (i < 10)
	{
		char dest[46] = "tu es la deuxieme phrase";
		char dest1[36] = "nous sommes la troisieme phrase";
 		ft_strncpy(dest, src, i);
		strncpy(dest, src, i);
 		ft_strncpy(dest1, src, i);
		strncpy(dest1, src, i);
		printf("%s\n", dest1);
		printf("%s\n", dest);
		i += 1;
	}

	printf("\n ----- \n");
	printf("\n ----- \n");


//	printf("%s\n", strcpy("coucou les", "loulous"));

	return (0);
}

