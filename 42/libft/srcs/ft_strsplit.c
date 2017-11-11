/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:19:54 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/11 18:53:04 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_size(const char *str, char c)
{
	size_t	res;

	res = 0;
	while (*str)
	{
		if (*str != c && (!*(str + 1) || *(str + 1) == c))
			res++;
		str++;
	}
	return (res);
}

static char		*copy(const char *s, char c)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s[i] != c)
		i++;
	cpy = (char*)malloc(sizeof(char) * i);
	cpy[i] = '\0';
	while (--i >= 0)
		cpy[i] = s[i];
	return (cpy);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	size;

	size = (calc_size((char*)s, c));
	if (!(res = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			*res++ = copy(s, c);
			while (*s && *s != c)
				s++;
		}
		s++;
	}
	*res = NULL;
	return (res - size);
}
