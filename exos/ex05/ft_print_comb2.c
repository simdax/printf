/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:22 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 10:53:44 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

#include <stdio.h>
void printNumber(int n)
{

	int remainder = 0;
	int divided = 0;

	if(n > (48 + 9))
	{
		remainder = (n - 48) % 10;
		divided = (n - 48) / 10;
		ft_putchar(divided + 48);
		ft_putchar(remainder + 48);
	} else {
		ft_putchar(48);
		ft_putchar(n);
	}
}

void ft_print_comb2 ()
{
	int i = 48;
	int j = 0;

	while(i < (48 + 98))
	{
		j = i + 1;
		while(j < (48 + 99))
		{
			printNumber(i);
			ft_putchar(' ');
			printNumber(j);	
			if(i != 48 + 97){
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
