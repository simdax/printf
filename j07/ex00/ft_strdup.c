/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:10:07 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 19:25:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(src) * length + 1);
	if (!copy)
		return ('\0');
	length = 0;
	while (*src)
	{
		*(copy + length) = *src++;
		length++;
	}
	return (copy);
}
