/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:13:24 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 18:27:40 by scornaz          ###   ########.fr       */
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
	return (-1);
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
		matoi(nb / len_base, base, len_base, dest + 1);
		matoi(nb % len_base, base, len_base, dest);
	}
	else
		*dest = base[nb];
}

int		check_base(char *base)
{
	while (*base)
	{
		if (i_of(*base)
			base++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	res;
	int		len_from;
	int		len_to;
	char	*result;

	result = (char*)malloc(sizeof(char) * 100);
	res = 0;
	len_from = 0;
	len_to = 0;
	while (base_from[len_from++])
		;
	while (base_to[len_to++])
		;
	i = -1;
	check_base(base_from, len_from);
	while (nbr[++i])
		res = res * (len_from - 1) + i_of(nbr[i], base_from);
	matoi(res, base_to, len_to - 1, result);
	str_rev(result);
	return (result);
}
