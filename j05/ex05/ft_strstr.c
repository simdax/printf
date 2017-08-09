/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:57:57 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 15:27:20 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*win(int begin, char *str)
{
	int i;

	i = 0;
	while (i < begin)
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
		if (to_find[begin + 1] == '\0')
			return (win(marker, str));
		if (str[i] == to_find[begin])
		{
			if (begin == 0)
				marker = i;
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
