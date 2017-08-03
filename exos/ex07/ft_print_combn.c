/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:42 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 09:26:59 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

#include <stdio.h>

void print(int *table, int total)
{
	int i = 0;
	while(i <= total){
		ft_putchar(table[i]);
		i++;
	}
	ft_putchar(',');
}

void f (int index, int niveau, int *table, int offset){

	int i = 0;
	int to = 10 - niveau;

	table[index] += offset;

	while(i <= to - offset){
		if (index < niveau){
			f(index + 1, niveau - 1, table, i + 1);
		} else {
			printf("%d<>%d ", index, niveau);
			print(table, index);
		}
		table[index]++ ;
		i++;
	}

	table[index] = 48;
}

void ft_print_combn (int n)
{
	int table[10] = {48, 48, 48, 48, 48, 48, 48, 48, 48, 48};
	f(0, n, table, 0);
}
