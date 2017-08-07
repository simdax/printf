/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:16:52 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 19:19:44 by scornaz          ###   ########.fr       */
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
		if (!test(*str, 97, 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

