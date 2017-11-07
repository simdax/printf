/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:50:17 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 16:30:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_print_alphabet(void)
{
	char	c;
		
	c = 'a';
	while (c != 'z')
		ft_putchar(c++);
}

int main(){
	ft_print_alphabet();
}
