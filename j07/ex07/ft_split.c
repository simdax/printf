/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:26:05 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 14:09:57 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_sep(char c, char *seps)
{
	if (*seps)
		return (c == '\0' || c == *seps || is_sep(c, ++seps));
	return (0);
}

int		count_words(char *str, int i, int boolean, char *seps)
{
	if (!str[i])
		return (0);
	if (is_sep(str[i],seps))
		return (boolean + count_words(str, i + 1, 0, seps));
	else
		return (count_words(str, i + 1, 1, seps));
}

char	*str_copy(char *src, int from, int to)
{
	char	*dest;
	int		size;
	
	size = to - from;
	dest = (char*)malloc(sizeof(char) * (size + 1));
	while (from <= to)
	{
		*dest++ = src[from++];
	}
	*dest = '\0';
	return (dest - size - 1);
}

void	put_words(char *str, char *seps, char ***str_tab)
{
	int i;
	int mark;
	
	mark = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], seps) && !(is_sep(str[i + 1], seps)))
			mark = i + 1;
		else if (!(is_sep(str[i], seps)) && (is_sep(str[i + 1], seps)))
		{
			**str_tab = str_copy(str, mark, i);
			(*str_tab)++;
		}
		i++;
	}
  	(*str_tab)++;
 	**str_tab = NULL;
}

char	**ft_split(char *str, char *seps)
{
	char	**result;
	int		size;

	size = count_words(str, 0, 0, seps) + 1;
	result = (char**)malloc(sizeof(result) * (size + 1));
	put_words(str, seps, &result);
	return (result - size);
}
