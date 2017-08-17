/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:26:25 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 20:02:12 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(char **argv, int file)
{
	int		fd;
	int		ret;
	char	buf[64000];

	fd = open(argv[file], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, BUF_SIZE);
	}
	buf[ret] = '\0';
	close(fd);	
}

int		main(int argc, char **argv)
{
	int 	i;

	if (argc == 1)
	{
		FILENAME_ERROR;
	}
	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			print(argv, i++);
			write(1, "\n", 1);
		}
	}
	return (0);
}
