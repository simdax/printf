/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:27:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/24 15:04:06 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int ft_printf(const char* format, ...)
{
	va_list ap;
	va_start(ap, format);
	i=2;
	while (i--)
		ft_putstr(va_arg(ap, char*));
	va_end(ap);
	return (0);
}
