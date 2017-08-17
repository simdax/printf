/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:57:57 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 09:30:41 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rewind(int end, char *str)
{
	int i;

	i = 0;
	while (i < end)
	{
		str++;
		i++;
	}
	return (str);
}

void	init(int *i, int *begin, int *marker)
{
	*i = 0;
	*begin = 0;
	*marker = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int begin;
	int marker;

	if (!to_find[0])
		return (str);
	init(&i, &begin, &marker);
	while (str[i])
	{
		if (str[i] == to_find[begin])
		{
			if (begin == 0)
				marker = i;
			if (to_find[begin + 1] == '\0')
				return (rewind(marker, str));
			begin++;
		}
		else if (str[i] != to_find[begin])
		{
			marker = 0;
			begin = 0;
		}
		i++;
	}
	return (NULL);
}
