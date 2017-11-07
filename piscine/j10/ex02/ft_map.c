/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:09:34 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/22 11:30:08 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *copy;

	copy = (int*)malloc(sizeof(copy) * length);
	i = 0;
	while (i < length)
	{
		copy[i] = (*f)(tab[i]);
		i++;
	}
	return (copy);
}
