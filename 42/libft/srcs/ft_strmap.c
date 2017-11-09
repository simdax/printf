/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:44:45 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 13:48:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	while (res[i++])
		;
	res = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*s)
		res[i++] = f(*s++);
	res[i] = '\0';
	return (res);
}
