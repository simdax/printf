int ft_atoi_base(char *str, char *base);

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("b00", "bcdefghij"));
	printf("%d\n", ft_atoi_base("abc", "abc+"));
	printf("%d\n", ft_atoi_base("abc", "abcb"));

	printf("%d\n", ft_atoi_base("b", "bcdefghij"));
	printf("%d\n", ft_atoi_base("c", "bcdefghij"));
	printf("%d\n", ft_atoi_base("d", "bcdefghij"));
	printf("%d\n", ft_atoi_base("e", "bcdefghij"));

	printf("%d\n", ft_atoi_base("aaa", "abcd"));
	printf("%d\n", ft_atoi_base("aab", "abcd"));
	printf("%d\n", ft_atoi_base("aba", "abcd"));
	printf("%d\n", ft_atoi_base("baa", "abcd"));

	printf("%d\n", ft_atoi_base("jjjj", "bcdefghij"));
	return (0);
}

