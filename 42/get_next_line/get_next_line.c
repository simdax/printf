/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/25 18:56:20 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	replace_char(char *s, char c1, char c2)
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

static	int		try_read(char **s, char **line)
{
	int 	i;
	size_t	len;
	char	*tmp;
	
	i = 0;
	len = ft_strlen(*s);
	if ((i = replace_char(*s, '\n', '\0')) != -1)
	{
		*line = ft_strsub(*s, 0, i);
		tmp = ft_strdup(*s + i);
//		free(*s);
		*s = tmp;
		return (1);
	}
	return (0);
}

static int		realloc_cat(char **buffer, char *add, char **line)
{
	char	*res;
	int		len_buffer;
	int		ret;
	
	len_buffer = 0;
	if (*buffer)
		len_buffer = ft_strlen(*buffer);
	if (!(res = (char*)malloc(sizeof(char) * (len_buffer + ft_strlen(add) + 1))))
		return (0);
	if (*buffer)
		ft_strcpy(res, *buffer);
	res = ft_strcat(res, add);
	*buffer = res;
	ret = try_read(buffer, line);
	return (ret);
}

int			get_next_line(int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE];
	static char		*tmp[ULIMIT];

	if (!line || fd < 0 || fcntl(fd, F_GETFD) == -1)
		return (-1);		
	if (tmp[fd] && try_read(&tmp[fd], line))
		return (1);
	else
	{
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			if (realloc_cat(&tmp[fd], buf, line))
				return (1);
		}
		if (tmp[fd] && ft_strlen(tmp[fd]) > 0)
		{
			*line = tmp[fd];
			tmp[fd] = NULL;
			return (1);
		}
		return (0);
	}
}
