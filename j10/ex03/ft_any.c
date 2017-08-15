/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:27:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 09:33:43 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
	{
		if (!(*f)(*tab))
			return (0);
		tab++;
	}
	return (1);
}
