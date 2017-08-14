#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split_whitespaces(char *str);

void	test(char *str)
{
	char **res;
	int nb = 0;

	res = ft_split_whitespaces(str);
	while (res[nb])
	{
		printf("%s\n", res[nb]);
		nb++;
	}
}

int main()
{
	char *str = "rien     du tout les loulous";
	char *str1 = "";
	char *str2 = "	fdsjkflsadf	 fdsjk fsajfkl";

	test(str);
	test(str1);
	test(str2);
	return (0);
}
