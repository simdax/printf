/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:29:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/27 19:46:16 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _PRINTF_H
# define _PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

int 	ft_printf(const char* format, ...);
void	print_value(void *val, char type, size_t *c);
int		itoa_base(unsigned int i, size_t base);
void	print_padding(size_t count, char with, size_t *c);
void	print_sign(int sign);

# include "types.h"

#endif
