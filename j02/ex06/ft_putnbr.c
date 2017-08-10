/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 14:19:04 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	special(void);
void	print_neg(int n);

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
