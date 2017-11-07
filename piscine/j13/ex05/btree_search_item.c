/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:46:57 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 16:53:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

void	find_func(void *data_ref, void *data_node)
{
	if (data_node == data_ref)
		return (*data_node)
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	applyf(root->item);
	if (root->rigth)
		btree_apply_prefix(root->right, applyf);
}

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void *data;

	btree_apply_prefix(cmpf());
	return (data);
}
