/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:19:54 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/11 13:41:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	calc_size(const char *str, char c)
{
	size_t	res;

	res = 0;
	while (*str)
	{
		if (!(*str != c && (!*(str + 1) || *(str + 1) == c)))
			res++;
		str++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	size;

	size = (calc_size(s, c));
	if (!(res = (char**)malloc(sizeof(char*) * size + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
				*(*res)++ = *s++;
			*(++(*res)) = '\0';
			res++;
		}
		s++;
	}
	*res = NULL;
	return (res - size);
}
