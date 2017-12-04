#include "printf.h"

void	print_arg(t_num *num)
{
	if (num->padding >= 0)
		print_padding(num->padding, num->type_padding, &num->count);
	print_sign(num->sign, &num->count);
	write(1, num->value, num->str_len);
	if (num->padding < 0)
		print_padding(-num->padding, num->type_padding, &num->count);
}

char	*m_itoa(long long val, int base)
{
  char *res;
  char *tmp;
  int	i;
  
  tmp = (char*)malloc(sizeof(char) * 65);
  tmp[64] = '\0';
  i = 63;
  while (val >= base)
    {
	tmp[i] = "0123456789abcdef"[val % base];
	val /= base;
	i--;
    }
  tmp[i] = "0123456789abcdef"[val % base];
  res = strdup(tmp + i);
  free(tmp);
  return (res);
}

void	parse_value(int value, char type, t_num *a)
{
  a->value = m_itoa(value, 10);
  a->str_len = strlen(a->value);
  a->type = type;
}

void	re_orga(t_num *a)
{
  size_t	padding;

  a->count = 0;
  a->precision = a->precision - a->str_len;
  padding = a->str_len + IF(a->precision);
  a->padding = padding > 0 ? padding : 0;
}

void	parse_flags(char *str, t_num *a)
{
  while (*str)
    {
      if (*str == '#')
	a->alternate = 1;
      if (*str == '0')
	a->padding = '0';
      if (*str == '+')
        a->sign = 1;
      if (*str == '-')
	a->sign = -1;
      //if (*str == ' ')
	//rien
    }
}

int	main(int argc, char **argv)
{
  t_num		*a;

  /* a = (t_num) {.sign = 0, .alternate = 0, .padding = 0, */
  /*      .type_padding = 0, .precision = 0, .value = NULL, */
  /*      .str_len = 0, .count = 0 */
  /* }; */
  (void)argc;
  a = (t_num*)malloc(sizeof(*a));
  parse_value(atoi(argv[1]), 'd', a);
  a->padding = argc > 2 ? atoi(argv[2]) : 0;
  a->precision = argc > 3 ? atoi(argv[3]) : 0 ;
  if (argc > 4)
    parse_flags(argv[4], a);
  re_orga(a);
  print_arg(a);
  free(a->value);
}
