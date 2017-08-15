#include "../headers.h"

void ft_sort_wordtab(char **tab);

int main(int argc, char **argv)
{
	(void)argc;

	ft_sort_wordtab(argv);
	while (*argv)
		printf("%s", *argv++);

}
