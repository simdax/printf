char *ft_strstr(char *str, char *to_find);

#include <string.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	printf("\nLA TIENNE\n\n");

	printf("%s\n", ft_strstr("coucou les loulous", "loulous"));
	printf("%s\n", ft_strstr("coucou les loulous", "coucou"));
	printf("%s\n", ft_strstr("coucou les loulous", "rien"));
	printf("%s\n", ft_strstr("coucou les loulous", ""));
	printf("%s\n", ft_strstr("", "rien"));
	printf("%s\n", ft_strstr("*&*(djhkdfnsd ", "fdfjdskf"));
	printf("%s\n", ft_strstr("fsfsdf|||85fs", "fsfsdf|||85fs"));
	printf("%s\n", ft_strstr("ecA ecB ec", "ect"));

	printf("\nLA VRAIE\n\n");

	printf("%s\n", strstr("coucou les loulous", "loulous"));
	printf("%s\n", strstr("coucou les loulous", "coucou"));
	printf("%s\n", strstr("coucou les loulous", "rien"));
	printf("%s\n", strstr("coucou les loulous", ""));
	printf("%s\n", strstr("", "rien"));
	printf("%s\n", strstr("*&*(djhkdfnsd ", "fdfjdskf"));
	printf("%s\n", strstr("fsfsdf|||85fs", "fsfsdf|||85fs"));
	printf("%s\n", strstr("ecA ecB ec", "ect"));

//	printf("claudio\n");
/* 	char find2[] = "banana"; */
/* 	substr = ft_strstr(src, find2); */
/* 	assert_i((int)substr, 0); */
/* 	assert_s(ft_strstr(find2, "ana"), strstr(find2, "ana")); */
/* 	assert_i((int)ft_strstr(src, "jin"), (int)strstr(src, "jin")); */

	return (0);
}
