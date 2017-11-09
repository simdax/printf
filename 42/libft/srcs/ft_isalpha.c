/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:28:00 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 11:41:16 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if ('A' <= cc <= 'Z' || 'a' <= cc <= 'z')
		return (1);
	return (0);
}
