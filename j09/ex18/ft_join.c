/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:58:56 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 16:42:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	put_sep(char *str, char *sep)
{
	while (*sep)
	{
		*str = *sep;
		str++;
		sep++;
	}
}

char *ft_join(char **tab, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int 	l;
	
	l = 0;
	j = 0;
	while (tab[++l])
	{
		i = 0;
		while (tab[l][i])
		{
			i++;
			j++;
		}
	}
	res = (char*)malloc(sizeof(char) * j);
	l = 0;
	while (tab[++l])
	{
		i = 0;
		while (tab[l][i])
		{
			*res = tab[l][i];
			printf("%c\n", *res);
			res++;
			i++;
		}
	}
	printf("%s\n", res);
	(void)sep;
	*res = '\0';
	return (res);
}
