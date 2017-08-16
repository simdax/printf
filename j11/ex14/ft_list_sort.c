/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 07:11:12 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/16 08:41:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    while (begin_list)
    {
		if (cmp(begin_list->data, data_ref) < 0)
			return (begin_list);
		begin_list = begin_list->next;
    }
	return (NULL);
}

void	ft_sort_list(t_list **begin_list, int (*cmp)())
{
	t_list	*new;
	t_list	*copy;
	void	*tmp_data;

	copy = *begin_list;
	while (copy->next)
	{
		while ((new = ft_list_find(copy->next, copy->data, cmp)))
		{
			tmp_data = new->data;
			new->data = copy->data;
			copy->data = tmp_data;
		}
		copy = copy->next;
	}
}
