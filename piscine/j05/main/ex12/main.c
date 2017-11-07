int ft_str_is_numeric(char *str);

#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_numeric("chhhkfJKHaf"));
	printf("%d\n", ft_str_is_numeric("456"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}

