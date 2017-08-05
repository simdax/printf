/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 19:03:57 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		is_sorted(int *tab, int size)
{
	size--;
	while (size > 0)
	{
		if (tab[size + 1] < tab[size])
			return (0);
		size--;
	}
	return (1);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	while (is_sorted(tab, size))
	{
		i = size - 1;
		while (i > 0)
		{
			if (tab[i] < tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
			}
			i--;
		}
	}
}
