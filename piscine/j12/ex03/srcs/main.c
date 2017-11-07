/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:17:40 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/18 09:46:05 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char **argv)
{
	int				fd;
	unsigned int	ret;
	int 			size;
	char			buf[BUF_SIZE + 1];

	write(1, "ta mere", 10);
	if (argc == 1)
		FILENAME_ERROR;
	else
	{
		while (*argv)
		{
			fd = open(*argv, O_RDONLY);
			while ((ret = read(fd, buf, BUF_SIZE)))
				   ft_print_memory(buf, ret);
			ft_putchar('\n');
		}
		close(fd);
	}
}
