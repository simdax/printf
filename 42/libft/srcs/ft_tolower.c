/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:29:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 11:40:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if ('A' <= cc <= 'Z')
		return (cc + 32);
	return (0);
}

