/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:14:10 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 15:17:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BTREE_H
#define __FT_BTREE_H

typedef struct 		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
} 					t_btree;

#include <stdlib.h>
#include <stdio.h>

t_btree		*btree_create_node(void *item);
void		btree_apply_prefix(t_btree *root, void (*applyf)(void *));


#endif //FT_BTREE_H
