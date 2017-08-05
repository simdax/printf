/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:28:12 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 20:03:40 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	copy = str;
	while (i < (length / 2))
	{
		tmp = copy[length - 1 - i];
		copy[length - 1 - i] = copy[i];
		copy[i] = tmp;
		i++;
	}
	return (copy);
}
