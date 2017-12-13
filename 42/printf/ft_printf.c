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
	    if (flags.type == 'l')
		ft_putstr("prout");
	    //	    str = va_arg(arg, const char*);	    
	    print();
	}
	va_end(arg);
    }
    return (0);
}
