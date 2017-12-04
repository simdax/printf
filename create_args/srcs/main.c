#include "printf.h"

void	print_arg(t_num *num)
{
	if (num->padding >= 0)
		print_padding(num->padding, num->type_padding, &num->count);
	print_sign(num->sign, &num->count);
	print_value(&num->value, num->type, &num->count, num->precision);
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

/* int	*parse_flags(char *str, t_num *a) */
/* { */
/*   int  	flags = {0, 0, 0, 0, 0}; */

/*   while (*str) */
/*     { */
/*       if (*str == '#') */
/* 	a->alternate = 1; */
/* 	if (*str == '0') */
/* 	  if (*str == '+') */
/* 	    if (*str == '-') */
/* 	      if (*str == ' ') */
/*       flags[0] */

/* 	} */
/* } */

int	main(int argc, char **argv)
{
  t_num	a;
  size_t l;

  l = 0;
  a.count = 0;
  if (argc > 1)
      a.value = m_itoa(atoi(argv[1]), 10);
  a.type = argc > 2 ? argv[2][0] :  'd';
  a.padding = argc > 3 ? atoi(argv[3]) : 0;
  a.type_padding = argc > 4 ? argv[4][0] : ' ';
  a.precision = argc > 5 ? atoi(argv[5]) : 0;
  a.alternate = argc > 6 ? atoi(argv[6]) : 0;
  a.sign = argc > 7 ? atoi(argv[7]) : 0;
  printf("%s", a.value);
  free(a.value);
}
