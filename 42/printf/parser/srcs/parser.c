
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 14:30:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/12/09 18:49:55 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static t_flags	take_flags(char *str)
{
	t_flags		flags = {0, 0, 0, 0, 0, 0};
	
	while (*str)
	{
		SET(flags.zero, '0', *str);
		SET(flags.plus, '+', *str);
		SET(flags.hash, '#', *str);
		SET(flags.minus, '-', *str);
		SET(flags.space, ' ', *str);
		SET(flags.apostrophe, 39, *str);
		if (!ft_strany(*str, "0#+- '"))
			break;
		str++;
	}
	return (flags);
}

t_flags				parse(char *str)
{
	t_flags		flags;

	flags = take_flags(str);
	return (flags);
}
