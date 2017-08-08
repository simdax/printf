/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:43:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 21:21:30 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		mark;
	char	**result;

	mark = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i + 1] == '\0')
		{
 			*result = malloc(sizeof(char) * (i - mark) + 1);
			while (mark != i)
			{
				*result[i] = str[mark];
				printf("%c\n", str[mark]);
				mark++;
			}
  			printf("new mot !\n", result[i]);
			mark++;
			result++;
		}
		i++;
	}
}
