/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/15 19:18:19 by scornaz          ###   ########.fr       */
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

static int	replace_char(char str[BUFF_SIZE], char c1, char c2)
{
	char	*s;
	size_t	i;

	s = str;
	i = 0;
	while (*s)
	{
		if (*s == c1)
		{
			*s = c2;
			return (1);
		}
		i++;
		s++;
	}
	return (0);
}

void		read_buffer(int fd)
{
	char			*res;
	static char		tmp[BUFF_SIZE] = "";

	res = ft_strcat(res, tmp);
	if ((replace_char(tmp, '\n', '\0')))
	{
		ft_memmove(tmp, tmp + ft_strlen(res) + 1, ft_strlen(res) + 1);
		write(1, res, ft_strlen(res));
		return ;
	}
	else 
	{
		while (read(fd, tmp, BUFF_SIZE))
		{
			if (replace_char(tmp, '\n', '\0'))
			{
				res = ft_strcat(res, tmp);
				ft_memmove(tmp, tmp + ft_strlen(res) + 1, ft_strlen(res) + 1);
				break ;
			}
			res = ft_strcat(res, tmp);
		}
	}
	if (ft_strlen(res))
		write(1, res, ft_strlen(res));
}

int			main(int argc, char **argv)
{
	int			fd;

	if (argc != 2)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)))
	{
		read_buffer(fd);
		ft_putchar('\n');
		read_buffer(fd);
		ft_putchar('\n');
		read_buffer(fd);
		ft_putchar('\n');
		read_buffer(fd);
		ft_putchar('\n');
		read_buffer(fd);
		ft_putchar('\n');
	}
}
