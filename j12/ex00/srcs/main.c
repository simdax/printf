/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:26:25 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 19:58:19 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[64000];

	fd = open(argv[1], O_RDONLY);
	if (argc > 2)
	{	
		ARGS_ERROR;
	}
	if (argc == 1)
	{
		FILENAME_ERROR;
	}
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, BUF_SIZE);
		}
	}
	close(fd);
	return (0);
}
