/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:08:34 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/22 10:04:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h" 

calc_func parse(char *op)
{
	int i;
	t_op tab[5];

	tab[0] = (t_op){.func = &ft_add, .label = "+"};
	tab[1] = (t_op){"-", &ft_sub};
	tab[2] = (t_op){"*", &ft_mul};
	tab[3] = (t_op){"/", &ft_div};
	tab[4] = (t_op){"&", &ft_mod};
	i = 0;
	while (i < 5)
	{
		if (!ft_strcmp(tab[i].label,op))
			return (tab[i].func);
		i++;
	}
	return (NULL);
}

void	calcul(int i, int j, char *op)
{
	calc_func f;

	f = parse(op);
	if (f)
		ft_putnbr(f(i, j)); 
	else
		ft_putnbr(0);
}
