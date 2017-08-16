/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:57:20 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/16 11:22:55 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int len_src;

	len_src = 0;
	while (src[len_src++])
		;
	i = 0;
	while (i < n)
	{
		if (i == n || i == len_src)
		{
			dest[i - 1] = '\0';
			break ;
		}
		if (src[i])
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
