/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:56:57 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/04 07:17:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int n, int power)
{
	int	result;
	int i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else 
	{
		while (i < power)
		{
			result *= n;
			i++;
		}
		return (result);
	}
}
