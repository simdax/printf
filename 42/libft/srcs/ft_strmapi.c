/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:49:17 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 13:49:58 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	while (res[i++])
		;
	res = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*s)
		res[i++] = f(i, *s++);
	res[i] = '\0';
	return (res);
}
