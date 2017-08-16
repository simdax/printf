unsigned int ft_strlcpy(char *dest, char *src, int nb);

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "CorrectOW AOISd";
	char dest[100] = "Correct ";
	char dest2[100] = "Correct ";
	printf("toi %u et lui %lu\n", ft_strlcpy(dest, src, 50), strlcpy(dest2, src, 50));
	printf("toi %s et lui %s\n",dest, dest2);
	printf("toi %u et lui %lu\n",ft_strlcpy(dest, src, 5), strlcpy(dest2, src, 5));
	printf("toi %s et lui %s\n",dest, dest2);
	printf("toi %u et lui %lu\n",ft_strlcpy(dest, src, 9), strlcpy(dest2, src, 9));
	printf("toi %s et lui %s\n",dest, dest2);

	char src2[] = "CorrectOW";
	printf("toi %u et lui %lu\n",ft_strlcpy(dest, src2, 5), strlcpy(dest2, src2, 5));
	printf("toi %s et lui %s\n",dest, dest2);
	printf("toi %u et lui %lu\n",ft_strlcpy(dest, src2, 9), strlcpy(dest2, src2, 9));
	printf("toi %s et lui %s\n",dest, dest2);

	char src00[50]= "coucou de dingue io io io";
	char dest00[]=  "les loulous";
	char dest01[]=  `"les loulous";
	int i = 0;
	while (i < 30)
	{
		printf(";toi %u et ", ft_strlcpy(dest00, src00, i));
		printf("%s\n", dest00);
		printf(";lui %lu et ", strlcpy(dest01, src00, i));
		printf("%s\n", dest01);
		printf("\n");
		i += 1;
	}


	return (0);
}
