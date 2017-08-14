/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:35:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/14 10:24:46 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char **argv)
{
	int len;
	int i;
	int j;

	i = 0;
	len = 0;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	(void)argc;
	res = (char*)malloc(sizeof(char) * length(argv) + 1);
	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			res[k++] = argv[i][j++];
		res[k++] = '\n';
		i++;
	}
	res[k++] = '\0';
	return (res);
}
