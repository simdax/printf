/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:57:28 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 20:16:55 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (*s++)
		i++;
	while (*(--s) && i--)
		if (*s == cc)
			return ((char *)s);
	if (cc == '\0')
		return ((char*)s);
	return (NULL);
}
