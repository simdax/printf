/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:40:45 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/10 14:41:59 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	unsigned int	len_src;
	unsigned int	len_dst;
	int				i;

	len_src = 0;
	while (src[len_src++])
		;
	len_src--;
	len_dst = 0;
	while (dst[len_dst++])
		;
	len_dst--;
	dst += len_dst;
	i = len - len_dst - 1;
	while (*src && i > 0 && i--)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src + ((len < len_dst) ? len : len_dst));
}
