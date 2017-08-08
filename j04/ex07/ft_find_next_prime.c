/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:25:17 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 16:20:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int nb)
{
	int counter;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	counter = 6;
	while (counter <= nb / 2)
	{
		if (nb % (counter + 1) == 0)
			return (0);
		if (nb % (counter - 1) == 0)
			return (0);
		counter += 6;
	}
	return (1);
}

int	limit(int nb)
{
	if (nb < 46341)
		return (nb * nb);
	else
		return (2147483647);
}

int	ft_find_next_prime(int num)
{
	if (num <= 1)
		return (2);
	while (num <= limit(num))
	{
		if (is_prime(num))
			return (num);
		num++;
	}
	return (0);
}
