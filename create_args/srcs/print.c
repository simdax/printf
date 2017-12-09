// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   print.cc                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/27 19:30:47 by scornaz           #+#    #+#             //
/*   Updated: 2017/12/09 12:41:18 by scornaz          ###   ########.fr       */
//                                                                            //
// ************************************************************************* //

#include "printf.h"

void	print_arg(t_num *num)
{
  if (num->alternate)
    print_alternate(num->type);
  if (num->left)
    print_padding(num->padding, num->type_padding, &num->count);
  print_sign(num->sign, &num->count);
  print_padding(num->precision, '0', &num->count);
  write(1, num->value, num->str_len);
  if (!num->left)
    print_padding(-num->padding, num->type_padding, &num->count);
}

void	print_alternate(char type)
{
  if (type == 'c')
    write(1, "0x", 2);
}

void	print_padding(size_t count, char with, size_t *c)
{
  while (count) {
    ft_putchar(with);
    *c += 1;
	--count;
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
