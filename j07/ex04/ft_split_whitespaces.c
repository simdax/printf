/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:43:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/24 10:30:15 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r');
}

int		count_words(char *str, int i, int boolean)
{
	if (!str[i])
		return (0);
	if (is_sep(str[i]))
	{
		if (boolean)
			return (1 + count_words(str, i + 1, 0));
		else
			return (count_words(str, i + 1, 0));
	}
	else
		return (count_words(str, i + 1, 1));
}

char	*str_copy(char *src, int len)
{
	char	*dest;
	int		i;
	int		real_len;

	i = 0;
	real_len = 0;
	while (i < len)
	{
		if (!is_sep(src[i++]))
			real_len++;
	}
	if (real_len == 0)
		return (0);
	i = 0;
	dest = (char*)malloc(sizeof(char) * (real_len + 1));
	while (i++ < len)
	{
		if (!is_sep(*src))
			*dest++ = *src;
		src++;
	}
	*dest = '\0';
	return (dest - real_len);
}

int		put_words(char *str, int i, int boolean, char ***str_tab)
{
	if (!str[i])
	{
		**str_tab = str_copy(str, i);
		return (0);
	}
	else if (is_sep(str[i]))
	{
		if (boolean)
		{
			**str_tab = str_copy(str, i);
			(*str_tab)++;
			return (put_words(++str + i, 0, 0, str_tab));
		}
		else
			return (put_words(str, ++i, 0, str_tab));
	}
	else
		return (put_words(str, ++i, 1, str_tab));
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		size;

	size = count_words(str, 0, 0) + 1;
	result = (char**)malloc(sizeof(char*) * (size + 1));
	put_words(str, 0, 0, &result);
	*(++result) = NULL;
	return (result - size);
}
