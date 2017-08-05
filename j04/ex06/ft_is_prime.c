/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:00:10 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/04 13:54:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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
