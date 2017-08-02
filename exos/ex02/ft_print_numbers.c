/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:54:45 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/02 11:10:22 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);
#include "../ft_putchar.c"

void ft_print_numbers()
{

	char letter = 48;
	while(letter < 58)
	{
		ft_putchar(letter);
		letter++;
	}

}
