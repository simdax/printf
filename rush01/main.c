/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/12 13:24:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_mat(char mat[10][10])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &mat[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	update_mat_string(char mat[10][10], char *str, int row)
{
	int i;

	i = 0;
	while (*str++)
	{
		mat[row][i] = *str;
		i++;
	}
}


int		main(int argc, char **argv)
{
	int		i;
	char	mat[10][10];

	(void)argc;
	i = 1;
	while (i < 10)
	{
		update_mat_string(mat, argv[i], i - 1);
		i++;
	}
	resolve(mat, 0, 0);
	print_mat(mat);
	return (0);
}
