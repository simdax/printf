/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:09:25 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 18:13:40 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				find_str_len(char *str)
{
	int res;

	res = 0;
	while (*str++)
		res++;
	return (res);
}

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_copy;
	char			*src_copy;
	unsigned int	n;
	unsigned int	buf_len;

	dest_copy = dest;
	src_copy = src;
	n = size;
	while (n-- > 0 && *dest_copy)
		dest_copy++;
	buf_len = dest_copy - dest;
	n = size - buf_len;
	if (n == 0)
		return (buf_len + find_str_len(src_copy));
	while (*src_copy)
	{
		if (n > 1)
		{
			*dest_copy++ = *src_copy;
			n--;
		}
		src_copy++;
	}
	*dest_copy = '\0';
	return (buf_len + (src_copy - src));
}
