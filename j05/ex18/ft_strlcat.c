/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:09:25 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 20:16:18 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* unsigned int	strcat(char *dest, char *src, unsigned int size) */
/* { */
/* 	int i; */
/* 	int j; */

/* 	i = 0; */
/* 	j = 0; */
/* 	while (dest[i]) */
/* 		i++; */
/* 	while (j < nb) */
/* 		dest[i++] = *src++; */
/* 	dest[i++] = '\0'; */
/* 	return dest; */
/* } */

#include <string.h>

int				main()
{
	char a1[50] = "coucou les aminches !";
	char a2[] = "yesy !";
	strlcat(a1, a2, 55);
	printf("%s", a1);
}
