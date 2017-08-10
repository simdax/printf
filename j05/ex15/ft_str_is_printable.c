/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:18:09 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 12:25:06 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!test(*str, 0, 32))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
