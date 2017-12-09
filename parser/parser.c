/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 14:30:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/12/09 16:45:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

#define SET(x,c,s)	x = x || s == c

static void		take_flags(t_flags flags, char *str)
{
	while (*str)
	{
		SET(flags.zero, '0', *str);
		SET(flags.plus, '+', *str);
		SET(flags.hash, '#', *str);
		SET(flags.minus, '-', *str);
		SET(flags.space, ' ', *str);
		SET(flags.apostrophe, ''', *str);
		ft_strany(*str, "0#+- '");
		str++;
	}
	return (flags);
}

t_flags			parse(char *str)
{
	t_flags		flags = {0, 0, 0, 0, 0};
	flags = take_flags(flags, str);
	return (t_flags);
}
