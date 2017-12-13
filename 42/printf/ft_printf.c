/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:27:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/29 18:14:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	flags2print(va_list arg, t_flags flags)
{
	t_num		a;
	int		value;

	value = va_arg(arg, int);
	parse_value(value, flags.type, &a);
	a.left = flags.minus ? 0 : 1;
	a.sign = value > 0;
	a.padding = flags.width;
	a.precision = flags.precision;
	a.alternate = flags.hash;
	a.type_padding = flags.zero ? '0' : ' ';
	a.count = 0;
	a.precision = IF(a.precision - a.str_len);
	a.padding = IF(ABS(a.padding) - a.str_len + a.precision);
	print_arg(&a);
	free(a.value);
}


static int		count_percents(const char *str)
{
    int count;

    count = 0;
    while (*str) {
	if (*str == '%') {
	    count++;
	}
	str++;
    }
    return (count);
}

int			ft_printf(const char* str, ...)
{
    va_list	arg;
    int		nb_args;
    t_flags	flags;
    
    nb_args = count_percents(str);
    if (nb_args){
	va_start(arg, str);
	while (nb_args--) {
	    flags = parse((char*)(str = (ft_strchr(str, '%') + 1)));
	    flags2print(arg, flags);
	}
	va_end(arg);
    }
    return (0);
}
