/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/12 11:44:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		calc_sum(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if ('1' <= *str && *str <= '9')
			i += *str - 48;
		str++;
	}
	return (i);
}

char	*find_forbidden(char *str, int i)
{
	while ()
	{

	}
	return ();
}

char		*others_ints(char *str)
{
	char	*ints;
	int 	len;
	int 	i;
	int 	j;
	char	*forbidden;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			len++;
		i++;
	}
	ints = (char*)malloc(sizeof(ints) * (len + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (is_already(str, i))
				j++; 
			ints[j] = j + 49;
			adapt_ints(ints, str);
		}
		i++;
	}
	ints[j] = '\0';
	return (ints);
}

int		solve(char *ligne, int i)
{
	printf("%s\n", others_ints(ligne));
	if (i < 9)
	{
		if (ligne[i] == '.')
		{
			ligne[i] = i + 49;
		}
		solve(ligne, i + 1);
	}
	else 
		return (calc_sum(ligne) == 45);
	return (0);
}

