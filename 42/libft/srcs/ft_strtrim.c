/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:08:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/10 16:09:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	is_blank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	char			*copy;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	copy = (char*)s;
	start = -1;
	end = -1;
	while (is_blank(s[++start]))
		;
	while (copy[++end])
		;
	if (start == end)
		return ("");
	while (is_blank(copy[--end]))
		;
	if (!(copy = (char*)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	s += start;
	i = 0;
	while (i <= end - start)
		copy[i++] = *s++;
	copy[i] = '\0';
	return (copy);
}
