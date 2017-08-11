/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:47:42 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 09:12:45 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		modulo_chelou(char lettre)
{
	if (lettre >= 'a' && lettre <= 'j')
	{
		return (lettre + 16);
	}
	else if (lettre >= 'k' && lettre <= 'z')
	{
		return (lettre - 10);
	}
	if (lettre >= 'A' && lettre <= 'J')
	{
		return (lettre + 16);
	}
	else if (lettre >= 'J' && lettre <= 'Z')
	{
		return (lettre - 10);
	}
	else
		return (lettre);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = modulo_chelou(str[i]);
		i++;
	}
	return (str);
}
