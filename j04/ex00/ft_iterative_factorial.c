/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:22:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 09:16:20 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	somme;
	int i;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 19)
	{
		return (0);
	}
	i = 1;
	somme = 1;
	while (i <= nb)
	{
		somme *= i;
		i++;
	}
	return (somme);
}
