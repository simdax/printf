/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:24:56 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 17:36:44 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while ((*dst++ = *src++))
		i++;
	return (dst - i - 1);
}
