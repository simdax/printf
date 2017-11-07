/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:49:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 21:55:54 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv)
{
	char	*buffer[64];
	int		fd;
	int		rd;

	if (argc < 2)
	{
		write(1, "File name missing", 15);
			return 1;
	}
	if (argc > 2)
	{
		write(1, "File name missing", 15);
		return 1;
	}
	fd = open(argv[1]);
	while(rd = read(fd, buffer, 64))
	{
		write(1, buffer, rd);
	}
}
