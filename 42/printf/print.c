// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   print.cc                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/27 19:30:47 by scornaz           #+#    #+#             //
/*   Updated: 2017/11/27 20:11:14 by scornaz          ###   ########.fr       */
//                                                                            //
// ************************************************************************* //

int		itoa_base(unsigned int i, size_t base, int *c)
{
	if (i > base)
		itoa_base(i / base, base, count);
	ft_putchar("0123456789abcdef"[i % base]);
	*c++;	
}

void	print_value(void *val, char type, size_t *c)
{
	if (type == 'x')
		itoa_base(*(int*)val, 16, c);	
	else if (type == 'o')
		itoa_base(*(int*)val, 8, c);	
	else
		itoa_base(*(int*)val, 10, c);	
}

void	print_padding(size_t count, char with, size_t *c)
{
	while (count--) {
		ft_putchar(with);
		*c++;
	}
}

void	print_sign(int sign)
{
	if (sign == -1)
	{
		ft_putchar('-');
		*c++;
	}
	else if (sign == 1) {
		ft_putchar('+');
		*c++;
	}
}
