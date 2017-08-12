#include "../includes.h"

int match(char *s1, char *s2);


int main()
{
	printf("%d\n", nmatch("salut", "salut"));

	printf("%d\n", nmatch("", "salut"));
	printf("%d\n", nmatch("salut", ""));

	printf("%d\n", nmatch("salut", "salut mpn grande"));
	printf("%d\n", nmatch("salut", "sa"));

	printf("%d\n", nmatch("salut", "sal*"));
	printf("%d\n", nmatch("salut", "sal*ut"));
	printf("%d\n", nmatch("salut", "salut*"));
	printf("%d\n", nmatch("salut", "s*a*lut"));
}
