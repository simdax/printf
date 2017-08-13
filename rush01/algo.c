/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 15:26:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		is_line_ok(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			return (0);
		i++;
	}
	return (1);
}

char	check(char mat[9][9], int row, int col, int nb)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (i != col && (mat[row][i]) == nb + 48)
			return ('.');
		if (i != row && (mat[i][col]) == nb + 48)
			return ('.');
		i++;
	}
	i = (row / 3) * 3;
	while (i < ((row / 3) * 3) + 3)
	{
		j = (col / 3) * 3;
		while (j < ((col / 3) * 3) + 3)
		{
			if (i != row && j != col && (mat[i][j]) == nb + 48)
				return ('.');
			j++;
		}
		i++;
	}
	return (nb + 48);
}

int		test(char mat[9][9], int row, int col, int *solutions)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (mat[row][col] == '.')
		{
			mat[row][col] = check(mat, row, col, i);
			if (mat[row][col] != '.')
			{
				resolve(mat, row, col + 1, solutions);
				if (*solutions < 2)
					mat[row][col] = '.';
				else
					return (0);
			}
		}
		else
			return (resolve(mat, row, col + 1, solutions));
		i++;
	}
	return (0);
}

int		resolve(char mat[9][9], int row, int col, char *solution[9][9])
{
	if (is_line_ok(mat[row]) && row == 8)
	{
		(*solutions)++;
		print_mat(mat);
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		if (col > 8)
			return (resolve(mat, row + 1, 0, solutions));
		else
			return (test(mat, row, col, solutions));
	}
}
