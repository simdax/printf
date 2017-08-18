/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:13:41 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 10:16:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	b_tree	*elem;
	
	elem = (b_tree*)malloc(sizeof(b_tree));
	elem.item = item;
	elem.right = NULL;
	elem.left = NULL;
	return (elem);
}
