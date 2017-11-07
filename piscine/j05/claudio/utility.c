/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:07:22 by ccabral           #+#    #+#             */
/*   Updated: 2017/08/16 11:55:34 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	assert_i(int a, int b)
{
	if (a == b)
	{
		ft_putstr("PASSED\n");
		ft_putstr("both values are equal to: ");
		ft_putnbr(a);
		ft_putchar('\n');
		return (1);
	}
	ft_putstr("FAILED\n");
	ft_putstr(" values are different:\nA = ");
	ft_putnbr(a);
	ft_putstr("\nB = ");
	ft_putnbr(b);
	ft_putchar('\n');
	return(0);
}

int assert_s(char * a, char * b)
{
	if (ft_strcmp(a,b) == 0)
	{
		ft_putstr("PASSED\n");
		ft_putstr("both values are equal to: ");
		ft_putstr(a);
		ft_putchar('\n');
		return (1);
	}
	ft_putstr("FAILED\n");
	ft_putstr(" values are different.\nA = ");
	ft_putstr(a);
	ft_putstr("\nB = ");
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
