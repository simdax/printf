/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:46:35 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 14:45:05 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_compact(char **tab, int length)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i])
		{
			tab[index++] = tab[i];
		}
		i++;
	}
	return (index);
}
