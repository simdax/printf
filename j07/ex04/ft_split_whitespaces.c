/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:43:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 10:45:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		count_words(char *str, int i, int boolean)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		if (boolean)
		{
			boolean = 0;
			return (1 + count_words(str, i + 1, boolean));
		}
		else
			return (count_words(str, i + 1, boolean));
	}
	if (96 < str[i] || str[i] < 123)
	{
		boolean = 1;
		return (count_words(str, i + 1, boolean));
	}
	return (count_words(str, i + 1, boolean));
}

void	ft_split_whitespaces(char *str)
{
	printf("%d", count_words(str, 0, 0));
}
