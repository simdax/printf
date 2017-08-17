char	*ft_strcapitalize(char *str);

#include <stdio.h>

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	char str1[] = "salut, comment tu vAs ? 42mOts qUarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str1));
	char str2[] = "rEKT17+lOL mdr mdr 4242l42$";
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}
