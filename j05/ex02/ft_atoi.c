/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 20:35:30 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		check_neg(char *str, int *length)
{
	char sign;

	sign = str[*length];
	if (sign == '-')
	{
		*length += 1;
		return (1);
	}
	else if (sign == '+')
	{
		*length += 1;
		return (0);
	}
	else if (sign == ' ')
	{
		*length += 1;
		return (check_neg(str, length));
	}
	else if (47 > sign || sign < 57)
		return (0);
	else
		return (-1);
}

int		check_size(char *str, int index)
{
	char *limit;

	limit = "2147483647";
	if (index == -1)
		return (1);
	if (str[index] == limit[index])
		return (check_size(str, index - 1));
	else
		return (str[index] < limit[index]);
	return (0);
}

int		compare_string(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	if (len > 9)
		return (0);
	if (len == 9)
		return (check_size(str, 9));
	return (0);
}

int		calc(int *res, char *str, int length, int is_neg)
{
	long	decimal;
	int		i;
	long	test;

	decimal = 1;
	i = length + 1;
	while (str[i] && str[i] != ' ')
	{
		decimal *= 10;
		i++;
	}
	test = *res + (str[length] - 48) * decimal;
	if (is_neg)
	{
		if (-test < INT_MIN)
			return (0);
	}
	else
	{
		if (test > INT_MAX)
			return (0);
	}
	*res += (str[length] - 48) * decimal;
	return (1);
}

int		ft_atoi(char *str)
{
	int		res;
	int		length;
	int		is_neg;

	length = 0;
	is_neg = check_neg(str, &length);
	if (is_neg == -1)
		return (0);
	res = 0;
	while (str[length])
	{
		if (str[length] == ' ')
			return (res);
		if (!calc(&res, str, length, is_neg))
			return (-1);
		length++;
	}
	if (is_neg)
		return (-res);
	else
		return (res);
}
