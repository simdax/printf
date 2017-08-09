/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:37:55 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 20:24:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		power_of(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * power_of(nb, power - 1));
}

int		ft_sqrt(int nb, int base)
{
	int i;
	int pow;

	i = 1;
	while (i < 46341)
	{
		pow = power_of(base, i);
		if (nb <= pow)
			return (i);
		else
			i++;
	}
	return (46341);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		result_length;
	int		length_base;
	int		pow;

	length_base = 0;
	while (base[length_base])
		length_base++;
	if (length_base > 1)
	{
		result_length = ft_sqrt(nb, length_base);
		while (result_length > 0)
		{
			pow = power_of(length_base, result_length - 1);
			ft_putchar(base[nb / pow]);
			nb = nb % pow;
			result_length--;
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (0 >= *str || *str < 32)
		{
			ft_putchar('\\');
			ft_putchar('0');
			ft_putnbr_base(*str, "0123456789abcdefg");
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
