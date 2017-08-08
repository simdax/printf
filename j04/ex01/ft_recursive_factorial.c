/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:32:51 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 16:20:19 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}
