#include "printf.h"

void	print_arg(t_num *num)
{
	if (num->padding >= 0)
		print_padding(num->padding, num->type_padding, &num->count);
	print_sign(num->sign, &num->count);
	print_value(num->value, num->type, &num->count, num->precision);
	if (num->padding < 0)
		print_padding(-num->padding, num->type_padding, &num->count);
}

int main(int argc, char **argv)
{
  t_num	a;

  a.count = 0;
  argc > 1 ? (a.value = argv[1]) : (a.value = NULL);
  argc > 2 ? (a.type = argv[2][0]) : (a.type = 'd');
  argc > 3 ? (a.padding = atoi(argv[3])) : (a.padding = 0);
  argc > 4 ? (a.type_padding = argv[4][0]) : (a.type_padding = 0);
  argc > 5 ? (a.precision = atoi(argv[5])) : (a.precision = 0);
  argc > 6 ? (a.alternate = atoi(argv[6])) : (a.alternate = 0);
  argc > 7 ? (a.sign = atoi(argv[7])) : (a.sign = 0);
  print_arg(&a);
}
