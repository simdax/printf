/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:06:08 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 19:19:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test(char c, char low, char high)
{
	return (low <= c && c <= high);
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!test(*str, 48, 57) && !test(*str, 65, 90) && !test(*str, 97, 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
