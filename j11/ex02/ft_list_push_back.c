/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:21:30 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 15:39:08 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list *ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	new = ft_create_elem(data);
	new->next = (*begin_list);
	*begin_list = new;
}
