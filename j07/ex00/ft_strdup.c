/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:10:07 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 21:26:52 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = (char*)malloc(sizeof(src) * length + 1);
	if (!copy)
		return (NULL);
	length = 0;
	while (*src)
	{
		*(copy + length) = *src++;
		length++;
	}
	return (copy);
}
