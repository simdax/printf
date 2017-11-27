#include "printf.h"


void	itoa_base(unsigned int i, size_t base)
{
	if (i > base)
		itoa_base(i / base, base);
	ft_putchar("0123456789abcdef"[i % base]);
}




int		main(void)
{
//	ft_printf("%5", "fsdfsdf");
	//double	a = 1000;
	//printf("%e", a);
//	int		b = 1000;

	itoa_base(1564, 10);
	

}

