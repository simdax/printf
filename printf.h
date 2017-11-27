/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:29:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/27 17:36:26 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _PRINTF_H
# define _PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft.h"
# include "types.h"

int ft_printf(const char* format, ...);
void	itoa_base(unsigned int i, size_t base);

#endif
