/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:43:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 11:19:19 by scornaz          ###   ########.fr       */
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
	else
	{
		boolean = 1;
		return (count_words(str, i + 1, boolean));
	}
}

int		put_words(char *str, int i, int boolean, char **str_tab)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		if (boolean)
		{
			boolean = 0;
			printf("%p\n", *str_tab);
			//*(*str_tab) = '\0';;
			str_tab++;
			return (1 + put_words(str, i + 1, boolean, str_tab));
		}
		else
			return (put_words(str, i + 1, boolean, str_tab));
	}
	else
	{
		boolean = 1;
//		printf("%c", str[i]);
//		printf("%p\n", *str_tab);
//		*(*str_tab) = str[i];
		//	(*str_tab)++;
		return (put_words(str, i + 1, boolean, str_tab));
	}
}

void	ft_split_whitespaces(char *str)
{
	int		size;
	char	**result;

	size = printf("%d", count_words(str, 0, 0));
	result = (char**)malloc(size + 1);
	put_words(str, 0, 0, result);
}
