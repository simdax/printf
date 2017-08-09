/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 13:08:50 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	calc(int *res, char *str, int length)
{
	int decimal;
	int i;

	decimal = 1;
	i = length + 1;
	while (str[i] && str[i] != ' ')
	{
		decimal *= 10;
		i++;
	}
	printf("%d", *res);
	*res += (str[length] - 48) * decimal;
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
		calc(&res, str, length);
		length++;
	}
	if (is_neg)
		return (-res);
	else
		return (res);
}
