/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:17:54 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 16:36:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!test(*str, 65, 90))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
