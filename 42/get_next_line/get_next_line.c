/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:40:23 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/15 14:03:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//static int	count;
//count = 0;

char	*cat(char *s1, char *s2)
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

void	replace_char (char **str, char c1, char c2)
{
	char	*s;

	s = *str;
	while (*s)
		if (*s == c1)
		{
			*s = c2;
			break ;
		}
}

t_buf	read_buffer(int fd)
{
	char	*res;
	char	tmp[BUF_SIZE];
	t_buf	buf;

	res = ft_strdup("");
	while (read(fd, tmp, O_RDONLY))
		res = ft_strcat(res, tmp);
	buf.content = res;
	buf.size = ft_strlen(res);
	return (buf);
}

int main(int argc, char **argv)
{
	int 	fd;
	t_buf	print;

	if (argc != 2)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)))
	{
		print = read_buffer(fd);
		write(1, print.content, print.size);
	}
}
