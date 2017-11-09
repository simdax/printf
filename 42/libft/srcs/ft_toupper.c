/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:29:08 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 11:41:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if ('a' <= cc <= 'z')
		return (cc - 32);
	return (c);
}
