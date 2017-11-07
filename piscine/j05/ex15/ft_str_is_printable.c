/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:18:09 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 09:38:12 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test(char c, char low, char high)
{
	return ((c < low || c > high) && c != 127);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!test(*str, 0, 31))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
