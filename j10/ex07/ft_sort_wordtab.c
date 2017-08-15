/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:28:31 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 13:37:08 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void swap(char **s1, char **s2)
{
	char *tmp;
	
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void ft_sort_wordtab(char **tab)
{
	int l;
	int i;

	l = 0;
	while(tab[l++])
		;
	l -= 2;
	i = 0;
	while (i < l)
	{
		if (strcmp(tab[i], tab[i + 1]) > 0)
		{
			swap(&tab[i], &tab[i + 1]);
			i =  -1;
		}
		i++;
	}
}
