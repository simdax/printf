/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 00:00:21 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	length;
	int	res;
	int decimal;
	int i;

	length = 0;
	res = 0;
	while (str[length])
	{
		length++;
	}
	length--;
	while (str[length])
	{
		decimal = 1;
		i = 0;
		while (i < res)
		{
			decimal *= 10;
			i++;
		}
		res += str[length] * decimal;
		length--;
	}
	return (res);
}
