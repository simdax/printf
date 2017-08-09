/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 19:20:49 by scornaz          ###   ########.fr       */
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

int		check_rep(char *base, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len - 1)
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		result_length;
	int		length_base;
	int		pow;

	length_base = 0;
	while (base[length_base])
		length_base++;
	if (check_rep(base, length_base))
	{
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
			ft_putchar('\n');
		}
	}
}
