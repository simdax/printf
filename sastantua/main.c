/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:46:29 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/05 20:25:37 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void triangle(int global, int level, int offset)
{
	if (global == 0)
		return;
	printf("*");
	if (level == 0)
		triangle(global - 1, level + 1, level + 1);
	else
		return triangle(global, level, offset - 1);
}

int	main(int argc, char **argv)
{
	char	*map;
	char 	size;
	int		counter;

	if(argv[1])
		size = argv[1][0] - 48;
	else
		return (0);

	printf("%d", size);
	counter = 0;
	triangle(5, 3, 3);
	return (0);
}

