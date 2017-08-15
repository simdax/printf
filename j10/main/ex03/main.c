#include "../headers.h"

int ft_any(char **tab, int(*f)(char*));

int ft_first_is_s(char *str);
int  ft_first_is_s(char *str)
{
	return (str[0] == 's');
}

int main()
{
	char 	*tab[] = {"salut", "smec", NULL};

	if (ft_any(tab, &ft_first_is_s))
		printf("youpi");
	else
		printf("ooooooooh :(");
}
