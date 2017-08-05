void ft_print_combn(int n);

#include "../ft_putchar.c"
#include "ft_print_combn.c"

int main () {
	int  i = 1;
	while(i < 10){
		ft_print_combn(i);
		ft_putchar('\n');
		i++;
	}
	
	return 0;
}
