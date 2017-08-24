/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:07:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/24 10:29:47 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		put_str(*tab);
		ft_putchar('\n');
		tab++;
	}
}

void	put_nbr(int nbr)
{
	if (nbr > 10)
	{
		put_nbr(nbr / 10);
		put_nbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par->str)
	{
		put_str(par->str);
		ft_putchar('\n');
		put_nbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
