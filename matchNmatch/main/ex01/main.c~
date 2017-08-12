#include "../includes.h"

int match(char *s1, char *s2);


int main()
{
	printf("%d\n", match("salut", "salut"));

	printf("%d\n", match("", "salut"));
	printf("%d\n", match("salut", ""));

	printf("%d\n", match("salut", "salut mpn grande"));
	printf("%d\n", match("salut", "sa"));

	printf("%d\n", match("salut", "sal*"));
	printf("%d\n", match("salut", "sal*ut"));
	printf("%d\n", match("salut", "salut*"));
	printf("%d\n", match("salut", "s*a*lut"));
}
