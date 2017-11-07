/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 21:01:50 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	print_mat(char **mat)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &(mat[i][j]), 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		test_grid(char **mat)
{
	int i;
	int j;
	int pos;

	i = 0;
	pos = 0;
	while (mat[i])
	{
		j = 0;
		if (mat[i][j] != '.')
		{
			if (!check(mat, pos, mat[i][j]))
				return (0);
			pos++;
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	**mat;
	char	**sol;
	int		solutions;

	sol = NULL;
	solutions = 0;
	(void)argc;
	if (argc > 10 || !check_input(argv))
		write(1, ERR, LEN_ERR);
	else
	{
		mat = copy_from(argv, 1);
		resolve(mat, 0, &solutions, &sol);
		if (solutions == 1)
		{
			print_mat(sol);
			return (0);
		}
		else
			write(1, ERR, LEN_ERR);
	}
	return (1);
}
