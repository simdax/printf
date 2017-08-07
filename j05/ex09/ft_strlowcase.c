/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:59:49 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 18:59:54 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	while(*str)
    {
		if(65 <= *str <= 90)
		{
			*str += 32;
		}
		str++;
    }
	return (str);
}
