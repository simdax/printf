/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:13:41 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 10:28:14 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->rigth)
		btree_apply_prefix(root->right, applyf);
	applyf(root->item);
}
