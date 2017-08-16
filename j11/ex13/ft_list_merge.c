/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:23:26 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 19:51:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;

    while (begin_list1)
    {
		begin_list1 = begin_list1->next
    }
	begin_list1->next = begin_list2;
}
 
