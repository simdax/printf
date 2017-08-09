/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:16:52 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 16:36:29 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!test(*str, 97, 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

