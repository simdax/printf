unsigned int ft_strlcpy(char *dest, char *src, int nb);

#include <stdio.h>
#include <string.h>

int main()
{
	char dest00[50]= "coucou de dingue io io io";
	char dest01[50]= "";
	char src00[]= "les loulous";
	char src01[]= "";
	int i = 0;
	while (i < 30)
	{
		printf("%u", ft_strlcpy(dest00, src00, i));
		printf("%s", dest00);
		printf("%u", ft_strlcpy(dest00, src01, i));
		printf("%s", dest00);
		printf("%u", ft_strlcpy(dest01, src00, i));
		printf("%s", dest01);
		printf("%u", ft_strlcpy(dest01, src01, i));
		printf("%s", dest01);


		printf("\n");


		printf("%lu", strlcpy(dest00, src00, i));
		printf("%s", dest00);
		printf("%lu", strlcpy(dest00, src01, i));
		printf("%s", dest00);
		printf("%lu", strlcpy(dest01, src00, i));
		printf("%s", dest01);
		printf("%lu", strlcpy(dest01, src01, i));
		printf("%s", dest01);
		printf("\n");
		i += 5;
	}


	return (0);
}
