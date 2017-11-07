/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:23:26 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 19:49:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

    while (begin_list)
    {
		if (cmp(begin_list->data, data_ref))
		{
			tmp = begin_list->next;
			begin_list->next = NULL;
			if (tmp->next)
				begin_list = tmp->next;
		}
		else
			begin_list = begin_list->next;
    }
}
 
