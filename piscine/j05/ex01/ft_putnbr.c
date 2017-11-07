/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:34:05 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 11:38:50 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr(int n);

void	special(void)
{
	ft_putchar('-');
	ft_putnbr(214748364);
	ft_putchar(56);
}

void	print_neg(int n)
{
	if (n == -2147483648)
	{
		special();
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(n - (n * 2));
	}
}

void	ft_putnbr(int n)
{
	int remainder;
	int divided;

	if (n < 0)
	{
		print_neg(n);
	}
	else if (n > 9)
	{
		remainder = n % 10;
		divided = n / 10;
		ft_putnbr(divided);
		ft_putnbr(remainder);
	}
	else
	{
		ft_putchar(48 + n);
	}
}
