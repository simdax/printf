/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:15 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 18:07:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int		ft_atoi(char *str)
{
	int	res;
	int decimal;
	int length;
	int	j;
	int i;

	length = 0;
	while(str[length])
	{
		length++;
	}
	j = 0;
	res = 0;
	length--;
	while (str[length])
	{
		decimal = 1;
		i = 0;
		while (i < j)
		{
			decimal *= 10;
			i++;
		}
		res += (str[length] - 48) * decimal;
		length--;
		j++;
	}
	return (res);
}
