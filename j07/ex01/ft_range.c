/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:24:54 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 21:41:36 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (max < min)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		tab[i] = min + i;
		printf("%d\n", tab[i]);
		i++;
	}
	return (tab);
}
