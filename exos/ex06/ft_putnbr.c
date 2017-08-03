/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 09:24:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void printNumber(int n)
{
	int remainder = 0;
	int divided = 0;

	if(n > (48 + 9))
	{
		remainder = (n - 48) % 10;
		divided = (n - 48) / 10;
		printNumber(divided + 48);
		printNumber(remainder + 48);
	} else {
		ft_putchar(n);
	}
}

