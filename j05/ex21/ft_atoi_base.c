/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 19:45:13 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		power_of(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * power_of(nb, power - 1));
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
	return (-1);
}

int		check_base(char *base, int base_len, char *str, int str_len)
{
	int i;
	int j;

	if (base_len < 2 || str_len == 0)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		str++;
	}
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < base_len)
		{
			if (j != i && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		len_base;
	int		str_len;
	int		result;

	result = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	str_len = 0;
	while (str[str_len])
		str_len++;
	if (!check_base(base, len_base, str, str_len))
		return (0);
	i = 0;
	while (str[i])
	{
		result += index_of(base, str[i]) * power_of(len_base, str_len - i - 1);
		i++;
	}
	return (result);
}
