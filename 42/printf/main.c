#include "printf.h"

void	print_arg(t_num *num)
{
	print_value(num->value, num->type, &num->count);
}

void	create_arg(void *value, char type, int padding, int precision, int alternate, int sign)
{
	t_num	a;
	
	a.value = value;
	a.count = 0;
	a.type = type;
	a.padding = padding;
	a.precision = precision;
	a.alternate = alternate;
	a.sign = sign;
	print_arg(&a);
}

int		main(void)
{
	int a = 50;

	create_arg(&a, 'c', 5, 5, 1, 1, 0);
}

