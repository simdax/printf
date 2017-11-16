/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:57:28 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 21:21:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (*s++)
		i++;
	--s;
	if (cc == '\0')
		return ((char*)s);
	while (*--s && i--)
	{
		if (*s == cc)
			return ((char *)s);
	}
	return (NULL);
}
