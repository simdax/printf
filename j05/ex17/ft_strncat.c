/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:07:52 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 16:56:21 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(j < nb)
	{
		dest[i++] = *src++;
		j++;
	}
	dest[i++] = '\0';
	return dest;
}
