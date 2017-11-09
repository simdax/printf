/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:19:54 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 15:13:17 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t	calc_size(const char *str, char c)
{
	size_t	res;

	res = 0;
	while (*str)
		if (*str++ == c)
			res++;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;

	if ((res = (char**)malloc(sizeof(char*) * (calc_size(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
				*(*res)++ = *s++;
			res++;
		}
		s++;
	}
	*res = NULL;
	return (res);
}
