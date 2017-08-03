/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:42 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 13:59:15 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#include <stdio.h>

void 	print(int *table, int total)
{
	int i;

	i = 0;
	while (i <= total){
		ft_putchar(table[i]);
		i++;
	}
	ft_putchar(',');
}

void	f(int index, int niveau, int *table, int offset){
	int i;
	int to;

	i = 0;
	to = 10 - niveau;
	table[index] += offset;

	while (i <= to - offset){
		if (niveau > 1){
			f(index + 1, niveau - 1, table, i + (1 + offset));
		}
		else
		{
			print(table, index);
		}
		table[index]++;
		i++;
	}

	table[index] = 48;
}

void	ft_print_combn (int n)
{
	int table[10] = {48, 48, 48, 48, 48, 48, 48, 48, 48, 48};	
	f(0, n, table, 0);
}
