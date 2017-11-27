#include "printf.h"


void	itoa_base(unsigned int i, size_t base)
{
	if (i > base)
		itoa_base(i / base, base);
	ft_putchar("0123456789abcdef"[i % base]);
}

void	print(t_num *num)
{
	itoa_base(*(int*)num->value, 10);
}

int		main(void)
{
	t_num	a;
	int		value = 50;

	a.self = &a;
	a.value = &value;
	print(&a);
}

