/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/16 11:55:31 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*cat(char *s1, char *s2)
{
	char	*res;

	res = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (*s1)
		*res++ = *s1++;
	while (*s2)
	{
		if (*s2 == '\n')
		{
			*res = '\0';
			return (res);
		}
		*res++ = *s2++;
	}
	*++res = '\0';
	return (res);
}

static int	replace_char(char s[BUFF_SIZE], char c1, char c2)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c1)
		{
			*s = c2;
			return (i + 1);
		}
		i++;
		s++;
	}
	return (-1);
}

void		read_buffer(int fd)
{
	char			*res;
	int				i;
	size_t			res_len;
	static char		tmp[BUFF_SIZE] = "";

	i = 0;
	if ((i = replace_char(tmp, '\n', '\0')) != -1)
	{
		ft_putstr(tmp);
		ft_bzero(tmp, i);
		ft_memmove(tmp, tmp + i, BUFF_SIZE - i);
		return ;
	}
	else 
	{
		res = ft_strcat(ft_strdup(""), tmp);
		while (read(fd, tmp, BUFF_SIZE))
		{
			res = ft_strcat(res, tmp);
			res_len = ft_strlen(res);
			if ((i = replace_char(res, '\n', '\0')) != -1)
			{
				ft_putstr(res);
				ft_bzero(res, i);
				ft_memmove(res, res + i, res_len - i);
				ft_strcpy(tmp, res);
				free(res);
				res = NULL;
				return ;
			}
		}
		write(1, res, ft_strlen(res));
	}
}

int			main(int argc, char **argv)
{
	int			fd;

	if (argc != 2)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)))
	{
		int n = 15;
		while (n--)
	{read_buffer(fd);
		ft_putchar('\n');
	}
	}
}
