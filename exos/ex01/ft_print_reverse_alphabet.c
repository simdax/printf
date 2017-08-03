/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:14:20 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 09:23:19 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char);

void ft_print_reverse_alphabet ()
{
	
	char letter = 'z';
	
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter --;
	}

}
