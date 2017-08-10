/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:47:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 12:23:24 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

void	upcase(char *str, int *gate, int i)
{
	if (*gate && 97 <= str[i] && str[i] <= 122)
	{
		str[i] -= 32;
		*gate = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*seps;
	int		i;
	int		j;
	int		gate;

	seps = " ,+0123456789";
	gate = 1;
	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		upcase(str, &gate, i);
		j = 0;
		while (seps[j])
		{
			if (str[i] == seps[j])
			{
				gate = 1;
			}
			j++;
		}
		i++;
	}
	return (str);
}
