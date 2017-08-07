/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:18:09 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 19:19:33 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_numeric(char *str)
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
