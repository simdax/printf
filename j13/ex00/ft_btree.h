/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:12:41 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 10:32:04 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct 		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
} 					t_btree;

#include <stdlib.h>
t_btree		*btree_create_node(void *item);


