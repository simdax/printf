/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 07:40:39 by scornaz          ###   ########.fr       */
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

int		check(char mat[9][9], int row, int col, int nb)
{
	int i;
	//int j;

	i = 0;
	while (i < 9)
	{
		if (i != col && (mat[row][i]) == nb + 48)
			if (i != row && (mat[i][col]) == nb + 48)
				return (0);
		i++;
	}
/* 	i = row / 3; */
/* 	while (i < row / 3 + 3) */
/* 	{ */
/* 		j = col / 3; */
/* 		while (j < col / 3 + 3) */
/* 		{ */
/* 			if (i != nb && (mat[row][i] == nb + 48 || mat[i][col] == nb + 48)) */
/* 				return (0); */
/* 			j++; */
/* 		} */
/* 		i++; */
/* 	} */
	return (nb);
}

int		resolve(char mat[9][9], int row, int col)
{
	int i;

	if (is_line_ok(mat[row]) && row == 8)
	{
		write(1, "OK!", 3);
		print_mat(mat);
		return (1);
	}
	if (col > 8)
		resolve(mat, row + 1, 0);
	i = 1;
	while (i < 10)
	{
		if (mat[row][col] == '.')
		{
			mat[row][col] = check(mat, row, col, i);
			if (mat[row][col])
			{
				mat[row][col] += 48;
				if (!resolve(mat, row, col + 1))
					mat[row][col] = '.';
			}
			else
				mat[row][col] = '.';
		}
		else
			resolve(mat, row, col + 1);
		i++;
	}
	return (0);
}
