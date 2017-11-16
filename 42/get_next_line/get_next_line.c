/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/16 17:46:26 by scornaz          ###   ########.fr       */
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

int			read_buffer(int fd)
{
	char			*res;
	int				i;
	size_t			res_len;
	size_t			tmp_len;
	static char		*tmp = NULL;

	i = 0;
	if (!tmp)
		tmp = ft_strdup("");
	tmp_len = ft_strlen(tmp);
	if ((i = replace_char(tmp, '\n', '\0')) != -1)
	{
		ft_putstr(tmp);
		tmp += i;
		return (1);
	}
	else 
	{
		res = ft_strdup(tmp);
		while (read(fd, tmp, BUFF_SIZE))
		{
			res = ft_strcat(res, tmp);
			res_len = ft_strlen(res);
			if ((i = replace_char(res, '\n', '\0')) != -1)
			{
				ft_putstr(res);
				ft_bzero(res, i);
				ft_memmove(res, res + i, res_len - i);
				res[res_len - i] = '\0';
				ft_strcpy(tmp, res);
				free(res);
				return (1);
			}
		}
		free(tmp);
		free(res);
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
