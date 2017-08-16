/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/16 15:17:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c);

int		check_rep(char *base, int len)
{
	int		i;
	int		j;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len - 1)
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

char	itoa(unsigned int nb, char *base, unsigned int len_base)
{
	if (nb >= len_base)
	{
		ft_putchar(itoa(nb / len_base, base, len_base));
		ft_putchar(itoa(nb % len_base, base, len_base));
		return (0);
	}
	else
	{
		return (base[nb]);
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	length_base;
	unsigned int	replace;

	replace = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		replace = -nb;
	}
	length_base = 0;
	while (base[length_base++])
		;
	if (check_rep(base, length_base))
	{
		if (replace < length_base - 1)
			ft_putchar(base[replace]);
		else
			itoa(replace, base, length_base - 1);
	}
}
