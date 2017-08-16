/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:51:47 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/16 10:24:32 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"

void	swap(t_list *first)
{
	void	*data_tmp;

	while (first)
	{
		if (first->next)
		{
			data_tmp = first->data;
			first->data = first->next->data;
			first->next->data = data_tmp;
		}
		first = first->next;
	}
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *prev;
	t_list *next;
	t_list *first;

	prev = NULL;
	first = begin_list;
	begin_list = begin_list->next;
	while (begin_list)
	{
		if (!(begin_list->next))
			first->next = begin_list;
		next = begin_list->next;
		begin_list->next = prev;
		prev = begin_list;
		begin_list = next;
  		if (!next)
			swap(first);
	}
}

