/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:15:41 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/09 16:35:41 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!test(*str, 48, 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
