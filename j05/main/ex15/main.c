#include <stdio.h>
int		ft_str_is_printable(char *str);

int main()
{
	char str[] = "ab*cd";
	printf("%d", ft_str_is_printable(str));
	char str1[] = "ABDASD";
	printf("%d", ft_str_is_printable(str1));
	char str2[] = "as\nasd";
	printf("%d", ft_str_is_printable(str2));
	return (0);
}
