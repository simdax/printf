/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:40:45 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 19:28:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (len == 0)
		return (0);
	while (*dst++ && j < len - 1)
		j++;
	--dst;
	while (*src && i + j < len - 1)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (i + j);
}
