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
#include "libft.h"

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

int				ft_printf(const char* str, ...)
{
	va_list arg;
	int		nb_args;

	nb_args = count_percents(str);
	if (nb_args) {
		
	}
	else
	{
		va_start(arg, str);
		while (nb_args--) {
			ft_putstr(str);
			str = va_arg(arg, const char*);	    
			//create arg
		}
		va_end(arg);
	}
	return (0);
}
