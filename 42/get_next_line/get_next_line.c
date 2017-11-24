/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/24 12:29:58 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char		*realloc_cat(char *init, char *add)
{
	char	*res;
	int		len_init;

	len_init = 0;
	if (init)
		len_init = ft_strlen(init);
	if (!(res = (char*)malloc(sizeof(char) * (len_init + ft_strlen(add) + 1))))
		return NULL;
	if (init)
		ft_strcpy(res, init);
	res = ft_strcat(res, add);
	return (res);
}

int			try_read(char **s)
{
	int i;

	i = 0;
	if ((i = replace_char(*s, '\n', '\0')) != -1)
	{
		ft_putstr(*s);
		*s += i;
		return (1);
	}
	return (0);
}

int			read_buffer(int fd)
{
	int				i;
	char			buf[BUFF_SIZE];
	static char		*tmp = NULL;

	i = 0;
	if (tmp && try_read(&tmp))
		return (1);
	else 
	{
		while ((i = read(fd, buf, BUFF_SIZE)))
		{
			buf[i] = '\0';
			tmp = realloc_cat(tmp, buf);
			if (try_read(&tmp))
				return(1);
		}
		return (0);
	}
}

int			main(int argc, char **argv)
{
	int			fd;

	if (argc != 2)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)))
	{
		while (read_buffer(fd))
		{
			ft_putchar('\n');
		}
	}
}
