/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:49:52 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 14:09:52 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_usage()
{
	ERROR;
}

int		check(char **argv, int *un, int *deux)
{
	int i;

	i = 0;
	while (i < 3)
	{
		if (i == 0)
			*un = atoi(argv[1]);
			;
		if (i == 1)
			;
		if (i == 2)
			*deux = atoi(argv[3]);
		i++;
	}
	return (1);
}
