/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:17:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 21:27:33 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup(char *src)
{
	char			*copy;
	int				i;
	unsigned int	size;

	i = 0;
	while (*str++)
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*src)
		copy[i++] = *src++;
	copy[i] = '\0';
	return (copy);
}
