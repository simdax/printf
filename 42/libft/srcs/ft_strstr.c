/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:59:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 11:42:08 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (haystack[i++])
	{
		while (haystack[j + i] == needle[j])
			if (!needle[++j])
				return ((char*)haystack + i);
		i += j;
		j = 0;
	}
	return (NULL);
}
