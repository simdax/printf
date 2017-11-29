/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:29:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/29 16:42:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _PRINTF_H
# define _PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

int 	ft_printf(const char* format, ...);
void	print_value(void *val, char type, size_t *c);
void	itoa_base(unsigned int i, size_t base, size_t *c);
void	print_padding(size_t count, char with, size_t *c);
void	print_sign(int sign, size_t *c);

# include "types.h"

#endif
