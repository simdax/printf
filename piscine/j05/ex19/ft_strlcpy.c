/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:15:02 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/16 13:23:29 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int len_src;

	len_src = 0;
	while (src[len_src++])
		;
	if (n == 0)
		return (len_src - 1);
	i = 0;
	while (i < n)
	{
		if (i == len_src - 1 || i == n - 1)
		{
			break ;
		}
		if (src[i])
			dest[i] = src[i];
		i++;
	}
	while (dest[i])
		dest[i++] = '\0';
	return (len_src - 1);
}
