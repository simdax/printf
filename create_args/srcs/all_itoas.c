#include "libft.h"

void		itoa_base_dioux(unsigned int *i, size_t base, size_t *c)
{
  if (*i > base)
    {
      unsigned int val = *i / base;
      itoa_base_dioux(&val, base, c);
    }
  ft_putchar("0123456789abcdef"[(*i % base)]);
  *c += 1;	
}

/* void		itoa_base_l(long int *i, size_t base, size_t *c) */
/* { */
/*   if (*i > base) */
/*     itoa_base_l(&(i / base), base, c); */
/*   ft_putchar("0123456789abcdef"[*i % base]); */
/*   *c += 1;	 */
/* } */

/* void		itoa_base_ll(long long int *i, size_t base, size_t *c) */
/* { */
/*   if (*i > base) */
/*     { */
/*       *i /= base; */
/*       itoa_base_ll(i, base, c); */
/*     } */
/*   ft_putchar("0123456789abcdef"[*i % base]); */
/*   *c += 1;	 */
/* } */

void	choose_itoa(char type, void *val, size_t *c)
{
  /* if (type == 'x') */
  /*   itoa_base_dioux(val, 16, c);	 */
  /* else if (type == 'o') */
  /*   itoa_base_dioux(val, 8, c);	 */
  /* else */
  (void)type;
    itoa_base_dioux(val, 10, c);	
}
