/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:28:44 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/11 14:18:17 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_INT  2147483647
#define MIN_INT  -2147483648

static int	ft_isnum(char c)
{
	return (('0' <= c && c <= '9'));
}

static int	ft_issep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

int			ft_atoi(const char *str)
{
	long	res;
	int		neg;

	res = 0;
	neg = 0;
	while (!ft_isnum(*str))
	{
		if (*str == '+' || (neg = (*str == '-')))
		{
			str++;
			break ;
		}
		else if (ft_issep(*str))
			str++;
		else
			return (0);
	}
	while (*str && ft_isnum(*str))
	{
		res = (res * 10) + (*(str++) - '0');
		if (res > 2147483647 && (neg && -res < -2147483648))
			return (0);
	}
	return ((int)(neg ? -res : res));
}
