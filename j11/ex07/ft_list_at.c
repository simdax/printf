/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:35:59 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 17:50:52 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int size;

	size = 0;
	while (begin_list)
	{
		if (nbr == size)
			return (begin_list);
		size++;
		begin_list = begin_list->next;
	}
	return (NULL);
}
