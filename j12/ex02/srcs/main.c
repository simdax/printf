/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:26:25 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 21:05:06 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(char **argv, int file, int offset)
{
	int		fd;
	int		ret;
	char	buf[CHUNK_SIZE + 1];

	fd = open(argv[file], O_RDONLY);
	if (fd == -1)
		FILENAME_ERROR;
	else
	{
		lseek(fd, -offset, SEEK_END);
		while((ret = read(fd, buf, CHUNK_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ret);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	int 	i;
	int 	offset;
	
	if (argc == 1)
	{
		FILENAME_ERROR;
	}
	else
	{
		offset = 0;
		i = 1;
		if (*(argv[1]) == '-')
		{
			offset = ft_atoi(argv[2]);
			i = 3;
		}
		while (i < argc)
		{
			print(argv, i++, offset);
			write(1, "\n", 1);
		}
	}
	return (0);
}
