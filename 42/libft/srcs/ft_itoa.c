/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:06:55 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/11 19:39:00 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_itoa(int n)
{
	char		*res;
	size_t		len;
	long		copy;

	len = 1;
	if (!(copy = n))
		return ("0");
	while ((n /= 10))
		len++;
	if (!(res = (char*)malloc((len += copy < 0) + 1)))
		return (NULL);
	if (copy < 0)
	{
		copy = -copy;
		*res = '-';
	}
	res += len;
	*res-- = '\0';
	while (copy)
	{
		*res-- = '0' + copy % 10;
		copy /= 10;
	}
	return (res + (*res != '-'));
}
