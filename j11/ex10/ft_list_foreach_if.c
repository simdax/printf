/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:23:26 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 19:43:06 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    while (begin_list)
    {
		if (cmp(begin_list->data, data_ref))
			(*f)(begin_list->data);
		begin_list = begin_list->next;
    }
}
 
