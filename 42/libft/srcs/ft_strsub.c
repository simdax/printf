/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:03:10 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 18:11:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = s + start;
	while (len--)
		*res++ = *s++;
	return (res);
}
