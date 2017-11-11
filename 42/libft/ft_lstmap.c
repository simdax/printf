/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:33:42 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/10 20:11:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*tmp;
	unsigned int	count;

	while (lst)
	{
		tmp = f(lst);
		if(!(new_el = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new_list = new_el;
		next = new_el;
		next = next->next;
		lst = lst->next;		
	}
	return (new_list);
}
