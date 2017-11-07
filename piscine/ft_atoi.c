/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 21:04:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_neg(char *str, int *length)
{
	char sign;

	sign = *str;
	if (sign == '-')
	{
		*length = 1;
		return (check_size(str, 0));
	}
	else if(sign < 48 || sign > 57)
	{
		return (0);
	}
	else
	{
		*length = 0;
		return (check_size(str, 1));
	}
}

int		check_size(char *str, int sign)
{
	char max[10] = "2147483647";
	int i;
	int error;

	while (*str)
	{
		length = str++;
	}
	if (length > 10) {
		return (-1);
	}
	else if (length == 10)
	{
		i = 0;
		while (i < 10)
		{
			if (str[i] > max[i])
			{
				
			}
		}
	}
	if (error)
		if (sign)
			return (-1);
		else
			return (0);
	else
		return (1)
}

int		ft_atoi(char *str)
{
	int		res;
	int		decimal;
	int		length;
	int		i;
	int		is_neg;

	is_neg = check_neg(str, &length);
	if(is_neg != 0 || is_neg != 1)
		return is_neg;
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
