/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:59:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/08 21:28:05 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strstr(const char *haystack, const char *needle)
{
	unsigned int	i;

	i = 0;
	while (*haystack)
	{
		if (*haystack++ == needle[i])
		{
			i++;
			if (needle[i] == '\0')
				return
		}
		else
			i = 0;
	}
	return (NULL);
}
