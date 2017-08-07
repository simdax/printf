/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:57:20 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 18:57:43 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
    {
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
    }
	return dest;
}
