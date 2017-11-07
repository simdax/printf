char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "je suis la premiere phrase";
	int i = 0;

	while (i < 20)
	{
		char dest[1000];
		char dest1[1000];
		ft_strncpy(dest, src, i);
		strncpy(dest1, src, i);
		printf("MOOI %s\n", dest);
		printf("ORIG %s\n", dest1);
		i += 1;
	}

	printf("\n ----- \n");
	printf("\n ----- \n");

	return (0);
}

