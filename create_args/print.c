// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   print.cc                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/27 19:30:47 by scornaz           #+#    #+#             //
/*   Updated: 2017/11/29 16:41:48 by scornaz          ###   ########.fr       */
//                                                                            //
// ************************************************************************* //

#include "printf.h"

void	print_value(void *val, char type, size_t *c, size_t precision)
{
  int cc;

  cc = *c;
  choose_itoa(type, val, c);
  if (cc - *c < precision)
    print_padding(precision - cc - *c , 'p', c);
}

void	print_padding(size_t count, char with, size_t *c)
{
  while (count--) {
    ft_putchar(with);
    *c += 1;
  }
}

void	print_sign(int sign, size_t *c)
{
  if (sign == -1)
    {
      ft_putchar('-');
      *c += 1;
    }
  else if (sign == 1) {
    ft_putchar('+');
    *c += 1;
  }
}
