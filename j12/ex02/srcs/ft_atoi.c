/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 19:02:33 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_neg(char sign, int *length)
{
	if (sign == '-')
	{
		*length = 1;
		return (1);
	}
	else
	{
		*length = 0;
		return (0);
	}
}

int		ft_atoi(char *str)
{
	int		res;
	int		decimal;
	int		length;
	int		i;
	int		is_neg;

	is_neg = check_neg(*str, &length);
	res = 0;
	while (str[length])
	{
		decimal = 1;
		i = length + 1;
		while (str[i])
		{
			decimal *= 10;
			i++;
		}
		res += (str[length] - 48) * decimal;
		length++;
	}
	if (is_neg)
		return (-res);
	else
		return (res);
}
