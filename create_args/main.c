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

void	create_arg(void *value, char type, int padding, int precision, int alternate, int sign)
{
  t_num	a;
  
  a.value = value;
  a.count = 0;
  a.type = type;
  a.padding = padding;
  a.type_padding = ' ';
  a.precision = precision;
  a.alternate = alternate;
  a.sign = sign;
  print_arg(&a);
}

void cast()
{
  
}
int main(int argc, char **argv)
{
  int val = atoi(argv[1]);
  create_arg(
	     &val,
	     argv[2][0],
	     atoi(argv[3]),
	     atoi(argv[4]),
	     atoi(argv[5]),
	     atoi(argv[6])
	     );
  return (0);
}
