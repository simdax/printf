#include "../headers.h"

int ft_count_if(char **tab, int(*f)(char*));

int ft_first_is_s(char *str);
int  ft_first_is_s(char *str)
{
	return (str[0] == 's');
}

int main()
{
	char 	*tab[] = {"salut", "smec", "pas de s", NULL};
	int res;
	
	res = 0;
	if ((res = ft_count_if(tab, &ft_first_is_s)))
		printf("youpi : %d", res);
	else
		printf("ooooooooh :( : %d", res);
}
