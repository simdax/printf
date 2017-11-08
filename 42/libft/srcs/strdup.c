/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:18:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/08 20:23:40 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	char			*cpy;
	unsigned int	i;

	while (s1[i++])
		;
	if ((cpy = (char*)malloc(sizeof(char) * (i + 1))))
		while (*s1)
			*cpy++ = *s1++;
	else
		return (NULL);
	return (cpy - i);
}
