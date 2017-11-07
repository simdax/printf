/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 10:00:17 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		pw(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * pw(nb, power - 1));
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

int		check_neg(char *str)
{
	if (*str == '-')
	{
		ft_putchar('-');
		return (1);
	}
	else if (*str == '+')
		return (1);
	return (0);
}

int		check_base(char *base, int base_len, int str_len)
{
	int i;
	int j;

	if (base_len < 2 || str_len == 0)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j++ < base_len)
		{
			if (j != i && base[i] == base[j])
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		l_base;
	int		str_len;
	int		result;

	result = 0;
	l_base = -1;
	str_len = -1;
	while (base[++l_base])
		;
	while (str[++str_len])
		;
	if (!check_base(base, l_base, str_len))
		return (0);
	i = check_neg(str);
	while (str[i])
	{
		if (index_of(base, str[i]) == -1)
			break ;
		result = index_of(base, str[i]) + result * pw(l_base, str_len - i - 1);
		i++;
	}
	return (result);
}
