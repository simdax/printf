/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 09:16:33 by scornaz          ###   ########.fr       */
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

	i = 0;
	while (i < 9)
	{
		if (i != col && (mat[row][i]) == nb + 48)
			return ('.');
		if (i != row && (mat[i][col]) == nb + 48)
			return ('.');
		i++;
	}
/* 	int j; */
/* 	i = (row / 3) * 3; */
/* 	while (i < ((row / 3) * 3) + 3) */
/* 	{ */
/* 		j = (col / 3) * 3; */
/* 		while (j < ((col / 3) * 3) + 3) */
/* 		{ */
/* 			if (i != row && j != col && (mat[i][j]) == nb + 48) */
/* 					return (0); */
/* 			j++; */
/* 		} */
/* 		i++; */
/* 	} */
	return (nb + 48);
}

int		resolve(char mat[9][9], int row, int col)
{
	int i;

	if (is_line_ok(mat[row]) && row == 8)
	{
		print_mat(mat);
		write(1, "\n", 1);
		return (1);
	}
	if (col > 8)
	{
		return (resolve(mat, row + 1, 0));
	}
	else
	{
		i = 1;
		while (i < 10)
		{
			if (mat[row][col] == '.')
			{
				mat[row][col] = check(mat, row, col, i);
				if (mat[row][col] != '.')
				{
					if (!resolve(mat, row, col + 1))
						mat[row][col] = '.';
				}
			} else {
				return (resolve(mat, row, col + 1));
			}
			i++;
		}
		return (0);
	}
}
