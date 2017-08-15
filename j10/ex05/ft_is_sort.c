/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:41:20 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 10:05:22 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int res;

	i = 0;
	while (i < length - 1)
	{
		printf("%d et %d\n", tab[i], tab[i + 1]);
		res = (*f)(tab[i], tab[i + 1]);
		printf("%d\n", res);
		if (res > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

