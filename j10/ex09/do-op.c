/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:08:34 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 13:57:50 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h" 

calc_func parse(char *op)
{
	int i;

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
