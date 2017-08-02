/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 09:28:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/02 09:58:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char);
#include "../ft_putchar.c"

void ft_print_alphabet () {
	
	char letter ='a';

	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

