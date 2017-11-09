/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:32:27 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 18:35:41 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ss1;

	ss1 = s1;
	while (*ss1++)
		;
	ss1--;
	while (*s2)
		*ss1++ = *s2++;
	*ss1 = '\0';
	return (s1);
}
