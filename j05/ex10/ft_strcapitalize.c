/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:47:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 19:10:45 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (65 <= *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*seps;
	int		i;

	seps = " ,-";
	str = ft_strlowcase(str);
	while (*str)
	{
		i = 0;
		while (seps[i])
		{
			if (*str == seps[i])
			{
				str++;
				if (*str)
					*str = *str - 32;
				else
					return (str);
			}
		}
		str++;
	}
	return (str);
}
