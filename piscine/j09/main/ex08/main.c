#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../ex14/ft_perso.h"

t_perso **ft_decrypt(char *str);

int main()
{
	char str[] = "45|bob;30|Sim;18|Jean";
	**t_perso persos;
	
	persos = ft_decrypt(str);
	while (*persos)
	{
		printf("%d\n", (*persos)->age);
		printf("%s\n", (*persos)->name);
	}

	return (0);
}
