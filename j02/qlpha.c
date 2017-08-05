#include <unistd.h>

char func(char *coucou)
{
	write (1, coucou, 4);
	return 'g';
}

int main()
{
	char charRecupere;
	char coucou[] = {101, 100, 121, 101};
	charRecupere = func(coucou);
//	charRecupere <== func <== ()
	write (1, &charRecupere, 1);
	return(0);
}
