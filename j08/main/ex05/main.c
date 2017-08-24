#include "../ft_split_whitespaces.c"
#include "../ft_show_tab.c"
#include "../ft_stock_par.h"
#include <stdio.h>
#include <unistd.h>
#include <strings.h>

char **ft_split_whitespaces(char *str);
void ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

int main (int ac, char **av)
{
	struct s_stock_par	*tab;
	
	tab = NULL;
	(void)av;
	(void)ac;
	char *aav[2] = {
		"caca proutxs coucou les amis j arrive pas a le choper", 
		"coucou"
	};
	tab = ft_param_to_tab(2, aav);
	ft_show_tab(tab);
}
