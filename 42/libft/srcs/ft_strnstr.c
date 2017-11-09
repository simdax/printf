/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:45:30 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 11:41:55 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (haystack[i++])
	{
		while (haystack[j + i] == needle[j])
			if (j >= len || !needle[++j])
				return ((char*)haystack + i);
		i += j;
		j = 0;
	}
	return (NULL);
}
