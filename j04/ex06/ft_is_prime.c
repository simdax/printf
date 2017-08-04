/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:00:10 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 19:24:04 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int remainder;
	int counter;

	counter = 2;
	while (counter < nb - 1)
	{
		remainder = nb % counter;
		if (remainder == 0)
		{
			return (1);
		}
		counter++;
	}
	return (0);
}
