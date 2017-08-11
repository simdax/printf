/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:45:05 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 18:13:34 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		modulo_chelou(int nb)
{
	if (nb == 0 || nb == 12 || nb == 24)
		return (12);
	else
		return (nb % 12);
}

char	modulo_h(int nb)
{
	if (nb < 12 || nb == 24)
		return ('A');
	else
		return ('P');
}

char	*txt(void)
{
	return ("THE FOLLOWING TAKES PLACE BETWEEN");
}

void	ft_takes_place(int hour)
{
	char	am_pm;
	char	am_pm2;
	int		h1;
	int		h2;

	am_pm = modulo_h(hour);
	am_pm2 = modulo_h(hour + 1);
	h1 = modulo_chelou(hour);
	h2 = modulo_chelou(hour + 1);
	printf("%s %d.00 %c.M. AND %d.00 %c.M.\n", txt(), h1, am_pm, h2, am_pm2);
}
