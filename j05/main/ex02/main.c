int ft_atoi(char*);

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

//	printf("%d\n", INT_MAX - INT_MAX < 0);

	printf("%d\n", ft_atoi("+0422"));
	printf("%d\n", ft_atoi("     0422"));
	printf("%d\n", ft_atoi(" 4 2"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi(" -2147483648"));
	printf("%d\n", ft_atoi("+2147483647"));
	printf("%d\n", ft_atoi("   fdsnfja"));
	printf("%d\n", ft_atoi("  45612345645135456456421"));

	printf("\n ////////// \n\n");

	printf("%d\n", atoi("+0422"));
	printf("%d\n", atoi("    0422"));
	printf("%d\n", atoi(" 4  2"));
	printf("%d\n", atoi("-42"));
	printf("%d\n", atoi(" -2147483648"));
	printf("%d\n", atoi("+2147483647"));
	printf("%d\n", atoi("   fdsnfja"));
	printf("%d\n", atoi("       45612345645135456456421"));

	return (0);
}

