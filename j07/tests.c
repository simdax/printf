#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex04/ft_split_whitespaces.c"

int main()
{
/* 	char f[] = "dfsfafs asdf adsf fsd"; */
/* 	char *bob = ft_strdup(f); */
/* 	printf("%s", bob); */

/////////

/* 	int *tab = ft_range(12, 15); */
/* 	int i = 0; */
/* 	while (i < 3) */
/* 	{ */
/* 		printf("%d", tab[i]); */
/* 		i++; */
/* 	} */
	char **tab;
	tab = ft_split_whitespaces("truc de fou dingue de dingue");
	int i = 0;
/* 	while (i < 3) */
/* 	{ */
/* 		//printf("%s", tab[i]); */
/* 		i++; */
/* 	} */
}
