/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:27:55 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 21:31:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int i;

	if (min >= max)
		return NULL;
	i = 0;
	tab = (int*)malloc(sizeof(int) * max - min + 1);
	while (i < max)
		tab[i] = min + i++;
	return tab;
}
