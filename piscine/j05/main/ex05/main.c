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
	printf("%s\n", ft_strstr("*&*(d jhk dfnsd ", "jh k"));
	printf("%s\n", ft_strstr("fsfsdf|||85fs", "fsfsdf|||85fs"));
	printf("%s\n", ft_strstr("ecA ecB ec", "ect"));
	printf("%s\n", ft_strstr("sallut les cocos", "llut"));

	printf("\nLA VRAIE\n\n");

	printf("%s\n", strstr("coucou les loulous", "loulous"));
	printf("%s\n", strstr("coucou les loulous", "coucou"));
	printf("%s\n", strstr("coucou les loulous", "rien"));
	printf("%s\n", strstr("coucou les loulous", ""));
	printf("%s\n", strstr("", "rien"));
	printf("%s\n", strstr("*&*(d jhk dfnsd ", "jh k"));
	printf("%s\n", strstr("fsfsdf|||85fs", "fsfsdf|||85fs"));
	printf("%s\n", strstr("ecA ecB ec", "ect"));
	printf("%s\n", strstr("sallut les cocos", "llut"));

	return (0);
}
