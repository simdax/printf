/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:21 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 00:04:36 by scornaz          ###   ########.fr       */
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

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	j = size - 1;
	while (j < size - 1)
	{
		i = size - j - 1;
		while (i > 0)
		{
			if (tab[i] < tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
			}
			i--;
		}
		j++;
	}
}
