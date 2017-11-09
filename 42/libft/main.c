#include "include.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	void *a = malloc(1000);
	void *b = malloc(1000);
	void *c = malloc(1000);
//	printf("%p\n", ft_memset(a, 'g', 10));

/* printf("%p\n", ft_memset(a, 'g', 10)); */
/* ft_bzero(a, 10); */
/* printf("%p\n", a); */

/* printf("%p\n", ft_memcpy(b, c, 10)); */
/* printf("%p\n", ft_memccpy(b, c, 'c', 10)); */

	printf("%s\n", strstr("couarf", "arf"));
	printf("%s\n", strstr("cobobirf", "bobi"));
	printf("%s\n", strstr("couarfre", "fr"));
	printf("%s\n", strstr("couafa", "af"));

}
