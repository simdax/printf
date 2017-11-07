#include "../headers.h"

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(const char *, const char *));

int main(int argc, char **argv)
{
	(void)argc;

	ft_advanced_sort_wordtab(argv, &strcmp);
	while (*argv)
		printf("%s", *argv++);

}
