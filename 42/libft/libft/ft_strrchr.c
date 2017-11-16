/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:57:28 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/16 18:28:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	
	if (!c)
		return ((char*)s);
	i = ft_strlen(s);
	s += i;
	while (i >= 0)
	{
		--s;
		if (*s == c)
			return ((char *)s);
		--i;
	}
	return (NULL);
}
