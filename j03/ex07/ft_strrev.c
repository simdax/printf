/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:12 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 17:46:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*copy_mutable_string(char *str, int size)
{
	char	string[size];
	int		i;

	i = 0;
	while (*str)
	{
		string[i] = *str;
		str++;
		i++;
	}
	return (string);
}


#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	tmp;
	char	*copy;

	length = 0;
	i = 0;
	while (str[length])
	{
		length++;
	}
	copy = copy_mutable_string(str, length);
	while (i < (length / 2))
	{
		tmp = copy[length - 1 - i];
		copy[length - 1 - i] = copy[i];
		copy[i] = tmp;
		i++;
	}
	return (copy);
}
