/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:19:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 17:29:29 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	while ((*begin_list)->next)
	{
		tmp = (*begin_list)->next;
		free((*begin_list)->next);
		begin_list = &tmp;
	}
	begin_list = NULL;
}
