/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:35:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 19:38:05 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res = 1;

	if (nb == 0)
		return 1;
	if (nb < 0)
		return 0;
	while (nb > 0)
		res *= nb;
	return res;
}
