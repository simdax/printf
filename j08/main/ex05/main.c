#include "../ft_split_whitespaces.c"
#include "../ft_show_tab.c"
#include "../ft_stock_par.h"
#include <stdio.h>

char **ft_split_whitespaces(char *str);
void ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

int main (int ac, char **av)
{
	struct s_stock_par	*tab;
	tab = ft_param_to_tab(ac, av);
	ft_show_tab(tab);
}
