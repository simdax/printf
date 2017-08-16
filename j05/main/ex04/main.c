char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "je suis la premiere phrase";
	int i = 0;

	while (i < 100)
	{
		char dest[] = "nous sommes la troisieme phrase";
		char dest1[] = "nous sommes la troisieme phrase";
		ft_strncpy(dest, src, i);
		strncpy(dest1, src, i);
		printf("%s\n", dest);
		printf("%s\n", dest1);
		i += 1;
	}

	printf("\n ----- \n");
	printf("\n ----- \n");

	return (0);
}

