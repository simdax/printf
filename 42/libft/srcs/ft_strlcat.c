/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:40:45 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/08 20:49:27 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	while (*dst++)
		j++;
	while (src[i++])
		;
	while (*src && len-- > 0)
		*dst = *src++;
	*dst = '\0';
	return (i + j);
}
