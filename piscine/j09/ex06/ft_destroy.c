/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:26:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 09:32:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

voidft_destroy(char ***factory)
{
	while (**factory)
		free(**factory++);
	while (*factory)
		free(*factory++);
	while(factory)
		free(factory++);
}
