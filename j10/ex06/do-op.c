/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:08:34 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 12:17:49 by scornaz          ###   ########.fr       */
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
		if (!(strcmp(tab[i].label,op)))
			return (tab[i].func);
		i++;
	}
	return (NULL);
}

void	calc(int i, int j, char *op)
{
	printf("%d", parse(op)(i, j));
}
