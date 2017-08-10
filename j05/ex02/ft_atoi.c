/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:18:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 10:38:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		is_num(char c)
{
	return (47 < c && c < 58);
}

int		calc(int *res, char num, int is_neg)
{
	long	test;

	if (*res == 0)
		*res += (num - 48);
	else
	{
		test = *res;
		test = test * 10 + (num - 48);
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
		*res = test;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int is_neg;
	int res;

	is_neg = -1;
	res = 0;
	while (*str)
	{
		if (is_neg == -1)
		{
//			printf("char =%c et is_neg %d\n", *str, is_neg);
			if (*str == ' ')
				;
			else if (is_num(*str) || *str == '+')
			{
				is_neg = 0;
				if (*str == '+')
					str++;
			}
			else if (*str == '-')
			{
				is_neg = 1;
				str++;
			}
			else
				return (res);
		}
		if (is_neg != -1)
		{
			if (is_num(*str))
			{
				if (!calc(&res, *str, is_neg))
					return (-1);
			}
			else
				return (res);
		}
		str++;
	}
	if (is_neg)
		return (-res);
	return (res);
}
