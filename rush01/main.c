/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 15:26:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_mat(char mat[9][9])
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
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	update_mat_string(char mat[9][9], char *str, int row)
{
	int i;

	i = 0;
	while (str[i])
	{
		mat[row][i] = str[i];
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	mat[9][9];
	char	solutions[9][9];

	solutions = 0;
	(void)argc;
	i = 0;
	while (i < 9)
	{
		update_mat_string(mat, argv[i + 1], i);
		i++;
	}
	resolve(mat, 0, 0, &solutions);
	if (solutions == 1)
	{
		print_mat(mat);
	}
	else
		write(1, "Erreur", 10);
	return (0);
}
