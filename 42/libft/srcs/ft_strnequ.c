/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:27:04 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 15:12:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
		if (*s1 == *s2 == '\0' || n == 0)
			return (1);
	}
	return (0);
}
