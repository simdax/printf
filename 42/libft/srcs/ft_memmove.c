/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:00:51 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 16:53:07 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t			nn;
	unsigned char	*src_copy;
	unsigned char	*dst_copy;

	nn = 0;
	src_copy = (unsigned char*)malloc(n);
	while (nn < n)
		src_copy[nn++] = *(unsigned char*)src++;
	dst_copy = dst;
	while (n--)
		*(unsigned char*)dst_copy++ = *src_copy++;
	return (dst);
}
