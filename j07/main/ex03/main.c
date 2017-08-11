#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_concat_params(int argc, char **argv);

int main()
{
	int nb;
	char **str;
	
	str[0] = (char*)(sizeof(char) * 12);
	str[0] = "io ;es";
	ft_concat_params(nb, str);
	return (0);
}
