/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:18:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 09:23:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		is_num(char c)
{
	return (47 < c && c < 58);
}

int		is_w_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\r' || c == '\f');
}

int		calc(int *is_neg, long *tmp, char c)
{
	if (*is_neg == -1)
		*is_neg = 0;
	if ((*is_neg && *tmp * 10 > (long)INT_MAX + 1) ||
		(!*is_neg && *tmp * 10 > INT_MAX))
		return (0);
	*tmp = (*tmp * 10) + (c - '0');
	return (1);
}

int		ft_atoi(char *str)
{
	int		is_neg;
	long	tmp;

	is_neg = -1;
	tmp = 0;
	while (*str)
	{
		if (is_neg == -1 && is_w_space(*str))
			;
		else if (is_neg == -1 && *str == '-')
			is_neg = 1;
		else if (is_neg == -1 && *str == '+')
			is_neg = 0;
		else if (is_num(*str))
		{
			if (!calc(&is_neg, &tmp, *str))
				return (-1);
		}
		else
			break ;
		str++;
	}
	if (is_neg)
		return ((int)-tmp);
	return ((int)tmp);
}
