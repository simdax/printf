#include "../ft_split_whitespaces.c"
#include "../ft_show_tab.c"
#include "../ft_stock_par.h"
#include <stdio.h>
#include <unistd.h>

char **ft_split_whitespaces(char *str);
void ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

int main (int ac, char **av)
{
	struct s_stock_par	*tab;
	
	(void)av;
	(void)ac;
	char *aav[2] = {
		"rPwj07 5tl t2dAcx5BfjqU Wa5E F6Thj5 DgyUOW1LTi7 mMNU1kOG pcBHJTob pTA2i g8ow4MSeT 69GEuVT3Hck wyhW",
		"coucou"
	};
	tab = ft_param_to_tab(2, aav);
	ft_show_tab(tab);
}
