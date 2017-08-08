/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 11:05:59 by scornaz          ###   ########.fr       */
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

int		index_of(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		length_base;
	int		str_len;
	int		result;

	result = 0;
	length_base = 0;
	while (base[length_base])
		length_base++;
	str_len = 0;
	while (str[str_len])
		str_len++;
	i = 0;
	while (str[i])
	{
		result += index_of(base, str[i]) * power_of(length_base, str_len - i - 1);
		i++;
	}
	return (result);
}

void	main(void)
{
	printf("%d", ft_atoi_base("99049", "03456789"));
}
