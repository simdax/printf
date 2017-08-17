/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:26:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 15:24:16 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int					str_len(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char				*copy_str(char *str)
{
	char	*res;
	int		len;

	len = 0;
	res = (char*)malloc(sizeof(str) * str_len(str));
	while ((*res++ = *str++))
		;
	*res = '\0';
	return (res);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*result;
	int			i;

	result = (t_stock_par*)malloc(sizeof(result) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		result[i].size_param = str_len(av[i]) - 1;
		result[i].str = av[i];
		result[i].copy = copy_str(av[i]);
		result[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	result[i].str = NULL;
	return (result);
}
