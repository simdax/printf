/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:08:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 15:52:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	is_blank(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char			*copy;
	unsigned int	start;
	unsigned int	end;

	copy = (char*)s;
	start = 0;
	end = 0;
	while (is_blank(s[start++]))
		;
	while (copy[end++])
		;
	while (is_blank(copy[--end]))
		;
	if ((copy = (char*)malloc(sizeof(char) * (end - start))))
		return (NULL);
	s += start;
	while (end-- > start)
		*copy++ = *s++;
	return (copy);
}
