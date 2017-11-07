/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 20:05:46 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *tab, int i)
{
	int tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}

int		is_unsorted(int *tab, int size)
{
	size -= 2;
	while (size >= 0)
	{
		if (tab[size + 1] < tab[size])
			return (1);
		size--;
	}
	return (0);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;

	while (is_unsorted(tab, size))
	{
		i = size - 2;
		while (i >= 0)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(tab, i);
			}
			i--;
		}
	}
}
