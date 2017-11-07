/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:33:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 16:45:51 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*current;

	current = *root;
	if (current)
	{
		if (cmpf(current->item, item) < 0)
			btree_insert_data(current->right);
		else
			btree_insert_data(current->right);
	}
	else
		current = btree_create_node(item);
}
