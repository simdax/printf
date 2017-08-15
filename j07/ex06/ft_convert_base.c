/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:13:24 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/14 19:49:59 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		i_of(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	printf("%c\n", c);
	return (-1);
}

int		b_from(char *nb, char *ba, int len, int s)
{
	int i;
	int pow;

	if (s < 0)
		return (0);
	else
	{
		pow = 1;
		i = 0;
		if (s == 0)
			len = 1;
		else
			while (i++ < s)
				pow *= len;
		return (i_of(*nb, ba) * pow + b_from(nb + 1, ba, len, s - 1));
	}
}

void	str_rev(char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (str[i++])
		;
	i -= 2;
	j = 0;
	while (i - j > 1)
	{
		tmp = str[i];
		str[i--] = str[j];
		str[j++] = tmp;
	}
}

void	matoi(int nb, char *base, int len_base, char *dest)
{
	if (nb >= len_base)
	{
		matoi(nb % len_base, base, len_base, dest);
		matoi(nb / len_base, base, len_base, ++dest);
	}
	else
		*dest = base[nb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		is_neg;
	int		len_from;
	int		len_to;
	int		len_nbr;

	is_neg = nbr[0] == '-';
	len_from = 0;
	while (base_from[len_from++])
		;
	len_to = 0;
	while (base_to[len_to++])
		;
	len_nbr = 0;
	while (nbr[len_nbr])
	{
		if (i_of(nbr[len_nbr++], base_from) == -1)
			exit(-1);
	}
	str = (char*)malloc(sizeof(char) * 100);
	if (is_neg)
	{
		nbr++;
		str++[0] = '-';
	}
	matoi(b_from(nbr, base_from, len_from, len_nbr - 1), base_to, len_to, str);
	str_rev(str);
	return (str);
}
